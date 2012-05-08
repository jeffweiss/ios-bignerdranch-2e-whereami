//
//  MapPoint.m
//  Whereami
//
//  Created by Jeff Weiss on 1/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "MapPoint.h"

@implementation MapPoint

@synthesize coordinate, title;

- (id)initWithCoordinate:(CLLocationCoordinate2D)aCoord title:(NSString *)aTitle {
    self = [super init];
    if (self) {
        coordinate = aCoord;
        [self setTitle:aTitle];
    }
    return self;
}

- (void)dealloc {
    [title release];
    [super dealloc];
}

@end
