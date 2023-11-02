
@interface MKMapCamera : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    double  _heading;
    MKMapView * _mapView;
    bool  _needsStateUpdate;
    double  _pitch;
    bool  _pitchAdjustsAltitude;
}

@property (nonatomic) double altitude;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic) double centerCoordinateDistance;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (getter=_precisePitch, setter=_setPrecisePitch:, nonatomic) double precisePitch;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (struct CLLocationCoordinate2D { double x1; double x2; })_adjustCoordinateForPitch:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 heading:(double)arg2 pitch:(double)arg3 minimumPitchRequiredForAdjustment:(double)arg4 tolerance:(double)arg5;
+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 aspectRatio:(float)arg2;
+ (id)_cameraLookingAtMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)_cameraLookingAtScene:(id)arg1;
+ (unsigned long long)_sizeCategoryForViewSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)camera;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 eyeAltitude:(double)arg3;
+ (id)cameraLookingAtMapItem:(id)arg1 forViewSize:(struct CGSize { double x1; double x2; })arg2 allowPitch:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_enclosingGEOMapRectForAspectRatio:(float)arg1;
- (id)_mapView;
- (void)_mapViewStateChanged;
- (double)_precisePitch;
- (void)_setMapView:(id)arg1;
- (void)_setPrecisePitch:(double)arg1;
- (void)_updateState;
- (bool)_validate;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (double)centerCoordinateDistance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })enclosingMapRectForAspectRatio:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)heading;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)pitch;
- (void)setAltitude:(double)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCenterCoordinateDistance:(double)arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

+ (id)_CPS_cameraForRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;

@end
