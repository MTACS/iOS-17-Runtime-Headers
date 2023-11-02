
@interface FPDProcessMonitor : NSObject {
    NSMutableDictionary * _bundleIDForPID;
    NSCountedSet * _bundleIDs;
    <FPDProcessMonitorDelegate> * _delegate;
    NSSet * _excludedBundleIDs;
    NSMutableSet * _foregroundBundleIDs;
    RBSProcessMonitor * _monitor;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSCountedSet * _pids;
}

@property <FPDProcessMonitorDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;

- (void).cxx_destruct;
- (void)_addPIDToObserve:(int)arg1;
- (id)_bundleIDForPID:(int)arg1;
- (void)_configureAppMonitor:(id)arg1;
- (void)_createMonitor;
- (void)_handleProcessStateUpdate:(id)arg1;
- (void)_invalidate;
- (bool)_isProcessForeground:(id)arg1;
- (void)_removePIDToObserve:(int)arg1;
- (void)_startMonitoringAndSendInitialNotificationForPID:(int)arg1;
- (void)_stopMonitoringPID:(int)arg1;
- (void)_updateMonitoredBundleIDs;
- (void)addPIDToObserve:(int)arg1;
- (void)addPIDToObserveSync:(int)arg1;
- (id)delegate;
- (id)description;
- (id)initWithExcludedBundleIDs:(id)arg1;
- (void)invalidate;
- (bool)isForeground;
- (id)notificationQueue;
- (id)prettyDescription;
- (void)process:(int)arg1 didBecomeForeground:(bool)arg2;
- (void)removePIDToObserve:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationQueue:(id)arg1;

@end
