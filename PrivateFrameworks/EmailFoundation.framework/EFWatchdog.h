
@interface EFWatchdog : NSObject <EFLoggable, SBSApplicationUserQuitMonitorDelegate> {
    SBSApplicationUserQuitMonitor * _monitor;
    NSString * _monitoredBundleIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *monitoredBundleIdentifier;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithMonitoredBundleIdentifier:(id)arg1;
- (void)invalidate;
- (id)monitoredBundleIdentifier;
- (void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2;
- (void)start;

@end
