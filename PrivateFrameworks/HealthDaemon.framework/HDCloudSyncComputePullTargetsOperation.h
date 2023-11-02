
@interface HDCloudSyncComputePullTargetsOperation : HDCloudSyncSynchronousOperation {
    HDSyncIdentity * _currentSyncIdentity;
    bool  _hasUpgradedToSyncIdentity;
}

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationEnd;
+ (bool)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (bool)performWithError:(id*)arg1;

@end
