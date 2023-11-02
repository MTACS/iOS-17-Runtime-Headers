
@interface PPRecordMonitoringHelper : NSObject {
    NSHashTable * _delegates;
    bool  _hasRegistered;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_handleRecentChangesWithDelegates:(id)arg1 changeGenerator:(id /* block */)arg2 recordGenerator:(id /* block */)arg3;
- (id)_setupRecentChangesWithDelegates:(id)arg1 recordGenerator:(id /* block */)arg2;
- (void)handleChangeNotificationWithName:(id)arg1 afterDelaySeconds:(double)arg2 handler:(id /* block */)arg3;
- (id)initWithName:(id)arg1;
- (bool)loadRecordsAndMonitorChangesWithDelegate:(id)arg1 recordGenerator:(id /* block */)arg2 notificationRegistrationBlock:(id /* block */)arg3;
- (void)loadRecordsWithDelegate:(id)arg1 recordGenerator:(id /* block */)arg2;
- (void)resetWithDelegate:(id)arg1 recentChangesInProgress:(bool)arg2 recordGenerator:(id /* block */)arg3;
- (void)sendChangesToDelegatesWithChangeGenerator:(id /* block */)arg1 recordGenerator:(id /* block */)arg2;
- (void)sendResetToAllDelegatesWithRecordGenerator:(id /* block */)arg1;
- (void)unloadDelegate:(id)arg1;

@end
