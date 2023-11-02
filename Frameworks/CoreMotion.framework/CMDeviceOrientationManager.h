
@interface CMDeviceOrientationManager : NSObject {
    id  _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)initialize;
+ (bool)isAlwaysOn;
+ (bool)isAvailable;

- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceOrientationBlocking;
- (id)init;
- (id)initPrivate;
- (bool)isDeviceOrientationActive;
- (bool)isDeviceOrientationAvailable;
- (void)onDeviceOrientation:(const struct Sample { double x1; int x2; }*)arg1;
- (void)onMotionPreferencesUpdated;
- (void)onNotification:(id)arg1;
- (bool)orientationNotificationsDisabled;
- (void)setDeviceOrientationCallbackModePrivate:(int)arg1;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)start;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stop;
- (void)stopDeviceOrientationUpdates;
- (void)stopDeviceOrientationUpdatesPrivate;
- (id)stringForOrientation:(int)arg1;
- (void)updateAggregateDictionaryPrivate;

@end
