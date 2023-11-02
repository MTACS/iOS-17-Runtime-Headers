
@protocol SYDocumentWorkflowsDataStore <NSObject>

@required

- (NSUserActivity *)fetchUserActivityWithRelatedUniqueIdentifier:(NSString *)arg1 error:(id*)arg2;
- (bool)saveUserActivity:(NSUserActivity *)arg1 forRelatedUniqueIdentifier:(NSString *)arg2 sourceBundleIdentifier:(NSString *)arg3 error:(id*)arg4;

@end
