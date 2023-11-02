
@interface AVRouteDetectorInternal : NSObject {
    DADiscovery * customRouteDiscoverySession;
    bool  customRoutesPresent;
    bool  detectsCustomRoutes;
    id  didEnterBackgroundNotificationToken;
    id  didEnterForegroundNotificationToken;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    bool  multipleRoutesDetected;
    AVOutputDeviceDiscoverySession * outputDeviceDiscoverySession;
    id  outputDevicesChangeNotificationToken;
    bool  routeDetectionEnabled;
    bool  routeDetectionSuspended;
}

@end
