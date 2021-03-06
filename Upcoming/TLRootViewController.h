//
//  TLRootViewController.h
//  Layout Test
//
//  Created by Ash Furrow on 2013-04-12.
//  Copyright (c) 2013 Teehan+Lax. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TLEventViewController.h"
#import "TLHeaderViewController.h"

@interface TLRootViewController : UIViewController <UIGestureRecognizerDelegate, TLEventViewControllerDelegate, TLHeaderViewControllerDelegate>

@property (nonatomic, strong) UIImage *gradientImage;

@end