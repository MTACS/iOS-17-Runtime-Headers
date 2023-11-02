
@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget * _pushTarget;
    HDCloudSyncStore * _store;
}

@property (nonatomic, readonly) HDCloudSyncTarget *pushTarget;

+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 store:(id)arg3;
- (void)main;
- (id)pushTarget;

@end
