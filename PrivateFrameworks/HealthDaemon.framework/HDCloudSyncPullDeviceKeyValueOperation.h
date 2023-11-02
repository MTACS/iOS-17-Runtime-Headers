
@interface HDCloudSyncPullDeviceKeyValueOperation : HDCloudSyncSynchronousOperation {
    CKContainer * _container;
    HDCloudSyncCachedZone * _contextSyncZone;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 container:(id)arg2;
- (bool)performWithError:(id*)arg1;

@end
