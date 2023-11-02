
@protocol CAMLocationControllerListener <NSObject>

@required

- (void)authorizationStatusUpdated:(int)arg1;
- (void)currentLocationUpdated:(CLLocation *)arg1;
- (NSObject<OS_dispatch_queue> *)listeningQueue;

@end
