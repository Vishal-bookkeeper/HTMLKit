//
//  HTMLNodeIterator.h
//  HTMLKit
//
//  Created by Iska on 27/05/15.
//  Copyright (c) 2015 BrainCookie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTMLNodeFilter.h"

@class HTMLNode;

@interface HTMLNodeIterator : NSEnumerator

@property (nonatomic, strong, readonly) HTMLNode *root;
@property (nonatomic, strong, readonly) HTMLNode *referenceNode;
@property (nonatomic, assign, readonly) BOOL pointerBeforeReferenceNode;
@property (nonatomic, assign, readonly) HTMLNodeFilterShowOptions whatToShow;
@property (nonatomic, strong, readonly) id<HTMLNodeFilter> filter;

- (instancetype)initWithNode:(HTMLNode *)node;
- (instancetype)initWithNode:(HTMLNode *)node
					  filter:(id<HTMLNodeFilter>)filter;
- (instancetype)initWithNode:(HTMLNode *)node
					  filter:(id<HTMLNodeFilter>)filter
				 showOptions:(HTMLNodeFilterShowOptions)showOptions;


- (HTMLNode *)nextNode;
- (HTMLNode *)previousNode;

@end