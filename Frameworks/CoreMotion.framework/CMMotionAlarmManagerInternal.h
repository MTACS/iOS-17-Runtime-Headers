
@interface CMMotionAlarmManagerInternal : NSObject {
    NSMutableDictionary * fAlarms;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    bool  fListening;
    void * fLocationdConnection;
}

+ (id)instance;

- (bool)_acknowledgeAlarm:(id)arg1 error:(id*)arg2;
- (void)_handleAlarmFire:(id)arg1;
- (bool)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2;
- (bool)_registerAlarm:(id)arg1 error:(id*)arg2;
- (void)_startListeners;
- (void)_stopListeners;
- (void)_teardown;
- (bool)_unregisterAlarm:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)init;

@end
