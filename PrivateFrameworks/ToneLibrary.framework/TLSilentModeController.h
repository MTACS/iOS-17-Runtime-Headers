
@interface TLSilentModeController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    int  _ringerSwitchChangedNotifyToken;
    long long  _silentModeStatus;
}

@property (readonly) long long silentModeStatus;

+ (id)sharedSilentModeController;

- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_cancelRingerSwitchChangedNotifyToken;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (bool)_registerRingerSwitchChangedNotifyToken;
- (void)_setSilentModeStatus:(long long)arg1;
- (long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1;
- (void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1;
- (void)dealloc;
- (id)init;
- (long long)silentModeStatus;

@end
