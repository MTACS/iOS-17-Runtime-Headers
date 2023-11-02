
@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    _HDCloudSyncStorePersistableState * _storeState;
    HDCloudSyncTarget * _target;
}

@property (copy) HDCloudSyncTarget *target;

+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3;
- (void)main;
- (void)setTarget:(id)arg1;
- (id)target;

@end
