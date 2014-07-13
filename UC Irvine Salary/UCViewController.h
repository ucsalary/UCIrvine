//
//  UCViewController.h
//  UC Irvine Salary
//
//  Created by Ryan Garcia on 6/26/14.
//  Copyright (c) 2014 Nyquist Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UCViewController : UIViewController



-(void)getTop10Salaries;
-(void)search:(NSString *)first and:(NSString *)last;

@end
