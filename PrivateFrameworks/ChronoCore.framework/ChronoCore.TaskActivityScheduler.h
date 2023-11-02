
@interface ChronoCore.TaskActivityScheduler : NSObject {
    void _dataProtectionMonitor;
    void _keybagProvider;
    void _lock;
    void _lock_activityStore;
    void _lock_completedMigration;
    void _lock_enqueueActivityBlocksWaitingForMigration;
    void _lock_userManager;
    void _schedulingProvider;
    void _schedulingProviderQueue;
    void _systemDataMigrator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
