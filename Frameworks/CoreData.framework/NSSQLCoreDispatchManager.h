
@interface NSSQLCoreDispatchManager : NSObject {
    NSMutableArray * _connectionManagers;
    NSSQLCore * _sqlCore;
}

- (void)dealloc;
- (id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2;
- (void)scheduleBarrierBlock:(id /* block */)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;

@end
