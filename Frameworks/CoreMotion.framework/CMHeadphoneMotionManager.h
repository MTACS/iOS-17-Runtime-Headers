
@interface CMHeadphoneMotionManager : NSObject {
    <CMHeadphoneMotionManagerDelegate> * _delegate;
    CMHeadphoneMotionManagerInternal * _internal;
}

@property (nonatomic) <CMHeadphoneMotionManagerDelegate> *delegate;
@property (readonly) CMDeviceMotion *deviceMotion;
@property (getter=isDeviceMotionActive, nonatomic, readonly) bool deviceMotionActive;
@property (getter=isDeviceMotionAvailable, nonatomic, readonly) bool deviceMotionAvailable;

+ (long long)authorizationStatus;

- (void).cxx_destruct;
- (void)applyInitialReferencePrivate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueuePrivate;
- (id)deviceMotion;
- (id)init;
- (bool)isDeviceMotionActive;
- (bool)isDeviceMotionAvailable;
- (void)notifyDeviceConnectedEventToClientPrivate;
- (void)notifyDeviceDisconnectedEventToClientPrivate;
- (void)onDeviceMotionEventPrivate:(id)arg1;
- (void)onDeviceMotionPrivate:(id)arg1;
- (void)pauseDeviceMotionStreamingPrivate;
- (void)resumeDeviceMotionStreamingPrivate;
- (void)setDelegate:(id)arg1;
- (void)startDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startDeviceMotionUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopDeviceMotionUpdates;
- (void)stopDeviceMotionUpdatesPrivate;

@end
