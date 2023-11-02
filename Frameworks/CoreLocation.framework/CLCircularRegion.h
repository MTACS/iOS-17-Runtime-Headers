
@interface CLCircularRegion : CLRegion <HMFObject> {
    bool  _allowMonitoringWhileNearby;
    double  _desiredAccuracy;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _geoCenter;
    double  _geoRadius;
    int  _geoReferenceFrame;
    bool  _isLowPower;
}

@property (nonatomic, readonly) bool allowMonitoringWhileNearby;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property (nonatomic) double clsHorizontalAccuracy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double desiredAccuracy;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } geoCenter;
@property (nonatomic, readonly) double geoRadius;
@property (nonatomic) int geoReferenceFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLowPower;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) double radius;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (bool)allowMonitoringWhileNearby;
- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)desiredAccuracy;
- (void)encodeWithCoder:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })geoCenter;
- (double)geoRadius;
- (int)geoReferenceFrame;
- (unsigned long long)hash;
- (id)initForLowPowerWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initLegacyObjectWithCoder:(id)arg1;
- (id)initNearbyAllowedWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3 nearbyAllowed:(bool)arg4;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3 onBehalfOfBundleId:(id)arg4;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 referenceFrame:(int)arg3 allowMonitoringWhenNearby:(bool)arg4 lowPower:(bool)arg5 identifier:(id)arg6 onBehalfOfBundleId:(id)arg7 notifyOnEntry:(bool)arg8 notifyOnExit:(bool)arg9 conservativeEntry:(bool)arg10 emergency:(bool)arg11;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 referenceFrame:(int)arg3 allowMonitoringWhenNearby:(bool)arg4 lowPower:(bool)arg5 identifier:(id)arg6 onBehalfOfBundleId:(id)arg7 notifyOnEntry:(bool)arg8 notifyOnExit:(bool)arg9 conservativeEntry:(bool)arg10 emergency:(bool)arg11 deviceId:(id)arg12 handoffTag:(id)arg13;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLowPower;
- (double)radius;
- (int)referenceFrame;
- (void)setGeoReferenceFrame:(int)arg1;
- (void)setReferenceFrame:(int)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)circularRegionFromMapRegion:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)attributeDescriptions;
- (id)description;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)attributeDescriptions;
- (id)description;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (double)clsHorizontalAccuracy;
- (void)setClsHorizontalAccuracy:(double)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct CLLocationCoordinate2D { double x_2_1_1; double x_2_1_2; } x2; struct CLLocationCoordinate2D { double x_3_1_1; double x_3_1_2; } x3; struct CLLocationCoordinate2D { double x_4_1_1; double x_4_1_2; } x4; })boundingBox;
- (double)latitude;
- (double)longitude;
- (id)searchPredicateWithLatitudeKey:(id)arg1 longitudeKey:(id)arg2;

@end
