
@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncSynchronousOperation

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (bool)shouldLogAtOperationStart;

- (bool)performWithError:(id*)arg1;

@end
