
@interface GKRemoteAlertLauncher : NSObject {
    bool  _isLaunching;
    NSObject<OS_dispatch_source> * _launchTimeoutTimer;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) bool isLaunching;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *launchTimeoutTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void).cxx_destruct;
- (void)cancelLaunchTimeoutTimer;
- (void)dealloc;
- (id)init;
- (bool)isLaunching;
- (void)launchBypassingPreAuthentication:(bool)arg1 forGame:(id)arg2 hostPID:(int)arg3 deeplink:(id)arg4 observer:(id)arg5;
- (id)launchTimeoutTimer;
- (void)notifyDashboardDidLaunch;
- (id)queue;
- (void)setLaunchTimeoutTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startLaunchTimeoutTimer;

@end
