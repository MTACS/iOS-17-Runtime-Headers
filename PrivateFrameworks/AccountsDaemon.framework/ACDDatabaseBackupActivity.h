
@interface ACDDatabaseBackupActivity : NSObject {
    NSObject<OS_xpc_object> * _activityExecutionCriteria;
    ACDDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _xpcActivityPending;
}

@property (nonatomic, readonly) ACDDatabase *database;

+ (id)new;

- (void).cxx_destruct;
- (void)_registerActivityIfNeededSchedulingBackup:(bool)arg1;
- (void)_registerActivitySchedulingBackup:(bool)arg1;
- (id)activityCriteria;
- (id)database;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)registerActivityIfNeeded;
- (void)scheduleBackup;
- (void)scheduleBackupIfNonexistent;

@end
