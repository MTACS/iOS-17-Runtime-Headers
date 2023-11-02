
@interface HDCloudSyncPullStoreOperation : HDCloudSyncOperation {
    bool  _hasAppliedChange;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDCloudSyncTarget * _target;
}

@property (nonatomic, readonly) bool hasAppliedChange;
@property (nonatomic, readonly) HDCloudSyncTarget *target;

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)hasAppliedChange;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 target:(id)arg3;
- (void)main;
- (id)target;

@end
