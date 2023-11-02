
@interface AVRouteDetectorCoordinator : NSObject {
    bool  _routeDetectionEnabled;
}

@property (nonatomic, readonly) bool multipleRoutesDetected;
@property (getter=isRouteDetectionEnabled, nonatomic) bool routeDetectionEnabled;

+ (void)beginDetectingRoutes;
+ (void)endDetectingRoutes;
+ (bool)multipleRoutesDetected;
+ (id)routeDetectorCoordinatorQueue;
+ (void)setMultipleRoutesDetected:(bool)arg1;
+ (id)sharedSystemRouteDetector;
+ (void)updateMultipleRoutesDetected;

- (void)dealloc;
- (bool)isRouteDetectionEnabled;
- (bool)multipleRoutesDetected;
- (void)setRouteDetectionEnabled:(bool)arg1;

@end
