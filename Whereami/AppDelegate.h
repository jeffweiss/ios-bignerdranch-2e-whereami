//
//  AppDelegate.h
//  Whereami
//
//  Created by Jeff Weiss on 1/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate, MKMapViewDelegate, UITextFieldDelegate> {
    CLLocationManager *locationManager;
    
    IBOutlet MKMapView *worldView;
    IBOutlet UIActivityIndicatorView *activityIndicator;
    IBOutlet UITextField *locationTitleField;
}

@property  (strong, nonatomic) IBOutlet UIWindow *window;

- (void)findLocation;
- (void)foundLocation:(CLLocation *)loc;

@end
