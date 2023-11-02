
@interface CMCaptureFrameSenderEndpointObserver : NSObject {
    id /* block */  _endpointsChangedHandler;
    NSObject<OS_dispatch_queue> * _frameSenderEndpointsChangedNotificationQueue;
}

- (void)_handleFrameServerEndpointsChangedNotification:(id)arg1;
- (void)dealloc;
- (id)initWithEndpointsChangedHandler:(id /* block */)arg1;

@end
