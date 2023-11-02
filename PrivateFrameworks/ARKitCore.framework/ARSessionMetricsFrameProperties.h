
@interface ARSessionMetricsFrameProperties : NSObject {
    NSArray * _anchors;
    ARCamera * _camera;
    ARGeoTrackingStatus * _geoTrackingStatus;
    CLLocation * _location;
    ARVLStateData * _vlState;
    ARWorldTrackingState * _worldTrackingState;
}

@property (nonatomic, readonly) NSArray *anchors;
@property (nonatomic, readonly) ARCamera *camera;
@property (nonatomic, readonly) ARGeoTrackingStatus *geoTrackingStatus;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) ARVLStateData *vlState;
@property (nonatomic, readonly) ARWorldTrackingState *worldTrackingState;

- (void).cxx_destruct;
- (id)anchors;
- (id)camera;
- (id)geoTrackingStatus;
- (id)initWithFrame:(id)arg1;
- (id)location;
- (id)vlState;
- (id)worldTrackingState;

@end
