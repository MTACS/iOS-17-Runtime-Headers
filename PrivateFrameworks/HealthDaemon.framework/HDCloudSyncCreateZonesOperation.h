
@interface HDCloudSyncCreateZonesOperation : HDCloudSyncOperation {
    CKContainer * _container;
    NSArray * _zones;
}

+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 zones:(id)arg3 container:(id)arg4;
- (void)main;

@end
