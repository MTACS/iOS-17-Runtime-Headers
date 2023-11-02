
@interface AVOutputDeviceAuthorizationSessionInternal : NSObject {
    <AVOutputDeviceAuthorizationSessionDelegate> * delegate;
    <AVOutputDeviceAuthorizationSessionImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
}

- (void).cxx_destruct;

@end
