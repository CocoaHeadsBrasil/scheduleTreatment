//
//  NewPersonViewController.h
//  ScheduleTreatment
//
//  Created by Edmar dos Reis Silva on 12/17/14.
//  Copyright (c) 2014 Z-Sys. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewPersonViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *namePerson;
@property (strong, nonatomic) IBOutlet UITextField *emailPerson;
@property (strong, nonatomic) IBOutlet UITextField *phoneNumberPerson;

@end