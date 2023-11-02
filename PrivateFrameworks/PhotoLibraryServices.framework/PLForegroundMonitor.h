
@interface PLForegroundMonitor : NSObject {
    BKSApplicationStateMonitor * _applicationStateMonitor;
    NSObject<OS_dispatch_queue> * _applicationStateMonitorQueue;
    <PLForegroundMonitorDelegate> * _delegate;
    NSMutableSet * _foregroundBundleIDs;
}

@property (nonatomic) <PLForegroundMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (void)_applicationChangeToBG:(id)arg1;
- (void)_applicationChangeToFG:(id)arg1;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1;
- (void)_locked_applicationDidMoveToBackground:(id)arg1;
- (void)_locked_applicationDidMoveToForeground:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
