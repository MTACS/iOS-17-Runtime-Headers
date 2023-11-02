
@interface ARCoachingFrame : NSObject {
    NSArray * _anchors;
    ARCamera * _camera;
    ARGeoTrackingStatus * _geoTrackingStatus;
    long long  _interfaceOrientation;
    double  _timestamp;
}

@property (nonatomic, retain) NSArray *anchors;
@property (nonatomic, retain) ARCamera *camera;
@property (nonatomic, retain) ARGeoTrackingStatus *geoTrackingStatus;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)anchors;
- (id)camera;
- (id)geoTrackingStatus;
- (id)initWithFrame:(id)arg1;
- (long long)interfaceOrientation;
- (void)setAnchors:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setGeoTrackingStatus:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
