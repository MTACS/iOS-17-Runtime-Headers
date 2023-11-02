
@interface AVRouteDetector : NSObject {
    AVRouteDetectorInternal * _routeDetectorInternal;
}

@property (nonatomic) bool detectsCustomRoutes;
@property (readonly) bool multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled) bool routeDetectionEnabled;

+ (void)initialize;

- (void)_didEnterBackground;
- (void)_didEnterForeground;
- (bool)_isAirPlayDevicePresenceDetected;
- (bool)_isCustomRoutePresenceDetected;
- (void)_updateMultipleRoutesDetected;
- (void)_updateRouteDetectionEnabled;
- (void)dealloc;
- (bool)detectsCustomRoutes;
- (id)init;
- (bool)isRouteDetectionEnabled;
- (bool)multipleRoutesDetected;
- (void)setDetectsCustomRoutes:(bool)arg1;
- (void)setRouteDetectionEnabled:(bool)arg1;

@end
