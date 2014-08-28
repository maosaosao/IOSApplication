//
//  xxViewController.h
//  MyFirstApplication
//
//  Created by Zhang, Xin on 8/21/14.
//  Copyright (c) 2014 XinOrganization. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xxViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
- (IBAction)buttonPressed:(UIButton *)sender;

@end
