
@interface PFFairPlayRolloutController : NSObject {
    void $__lazy_storage_$_internalQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)didRollbackStatusChangeWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isEnabled;

@end
