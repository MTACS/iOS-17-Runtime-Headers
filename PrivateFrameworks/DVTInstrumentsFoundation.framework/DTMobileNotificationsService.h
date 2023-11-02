
@interface DTMobileNotificationsService : DTXService <DTMobileNotificationsServiceAuthorizedAPI> {
    RBSProcessMonitor * _appStateMonitor;
    bool  _applicationStateNotificationsEnabled;
    NSObject<OS_dispatch_source> * _memoryNotificationSource;
}

@property (nonatomic, retain) RBSProcessMonitor *appStateMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (void)_memoryNotification:(unsigned int)arg1 pid:(int)arg2;
- (void)_setAppStateNotificationsEnabled:(bool)arg1;
- (void)_setMemNotificationsEnabled:(bool)arg1;
- (id)appStateMonitor;
- (void)messageReceived:(id)arg1;
- (void)postDarwinNotification:(id)arg1;
- (void)setAppStateMonitor:(id)arg1;
- (void)setApplicationStateNotificationsEnabled:(id)arg1;
- (void)setMemoryNotificationsEnabled:(id)arg1;

@end
