
@interface HDCloudSyncStateSyncOperation : HDCloudSyncOperation {
    NSSet * _containers;
    NSMutableDictionary * _domainToEntityClassMapping;
    NSMutableArray * _recordsToBeSaved;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 containers:(id)arg2;
- (void)main;

@end
