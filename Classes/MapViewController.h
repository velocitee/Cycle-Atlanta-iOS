/** Cycle Altanta, Copyright 2012 Georgia Institute of Technology
 *                                    Atlanta, GA. USA
 *
 *   @author Christopher Le Dantec <ledantec@gatech.edu>
 *   @author Anhong Guo <guoanhong15@gmail.com>
 *
 *   Updated/Modified for Atlanta's app deployment. Based on the
 *   CycleTracks codebase for SFCTA.
 *
 ** CycleTracks, Copyright 2009,2010 San Francisco County Transportation Authority
 *                                    San Francisco, CA, USA
 *
 *   @author Matt Paul <mattpaul@mopimp.com>
 *
 *   This file is part of CycleTracks.
 *
 *   CycleTracks is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   CycleTracks is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with CycleTracks.  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  MapViewController.h
//  CycleTracks
//
//  Copyright 2009-2010 SFCTA. All rights reserved.
//  Written by Matt Paul <mattpaul@mopimp.com> on 9/28/09.
//	For more information on the project, 
//	e-mail Billy Charlton at the SFCTA <billy.charlton@sfcta.org>

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

#import "TripManager.h"


@interface MapViewController : UIViewController <MKMapViewDelegate>
{
	IBOutlet MKMapView *mapView;
	Trip *trip;
	
	UIBarButtonItem *doneButton;
	UIBarButtonItem *flipButton;
	UIView *infoView;
}


@property (nonatomic, retain) Trip *trip;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (nonatomic, retain) UIBarButtonItem *flipButton;
@property (nonatomic, retain) UIView *infoView;
@property (nonatomic, retain) MKPolyline* routeLine;

- (id)initWithTrip:(Trip *)trip;


@end
