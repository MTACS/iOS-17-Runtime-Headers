
@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    bool  _requiresOwnershipRoll;
    NSArray * _targets;
    NSMutableDictionary * _targetsBySequenceToDelete;
}

+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)main;

@end
