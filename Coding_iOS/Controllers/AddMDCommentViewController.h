//
//  AddMDCommentViewController.h
//  Coding_iOS
//
//  Created by Ease on 15/6/1.
//  Copyright (c) 2015年 Coding. All rights reserved.
//

#import "BaseViewController.h"

@interface AddMDCommentViewController : BaseViewController
@property (strong, nonatomic) void (^completeBlock)(id data, NSError *error);
@property (strong, nonatomic) NSString *requestPath;
@property (strong, nonatomic) NSMutableDictionary *requestParams;
@property (strong, nonatomic) NSString *contentStr;
@end
