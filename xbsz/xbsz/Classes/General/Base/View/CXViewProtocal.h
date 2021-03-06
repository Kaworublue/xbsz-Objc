//
//  CXViewProtocal.h
//  xbsz
//
//  Created by 陈鑫 on 16/12/13.
//  Copyright © 2016年 lotus. All rights reserved.
//
#import "CXViewModelProtocol.h"

@protocol CXViewProtocol <NSObject>

@optional

- (instancetype)initWithViewModel:(id <CXViewModelProtocol>)viewModel;

- (void)cx_bindViewModel;
- (void)cx_setupViews;




@end
