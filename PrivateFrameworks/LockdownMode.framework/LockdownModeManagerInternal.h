
@interface LockdownModeManagerInternal : NSObject {
    void $__lazy_storage_$_connection;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool enabledInAccount;

+ (id)shared;

- (void).cxx_destruct;
- (void)enableIfNeeded:(bool)arg1 completion:(id /* block */)arg2;
- (bool)enabled;
- (bool)enabledInAccount;
- (void)getEnabledInAccount:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)migrateIfNeededWithCompletion:(id /* block */)arg1;
- (void)notifyRestrictionChanged:(id)arg1;
- (void)rebootIfNeeded;
- (void)setEnabled:(bool)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
