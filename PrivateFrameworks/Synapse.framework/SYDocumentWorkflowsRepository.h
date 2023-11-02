
@interface SYDocumentWorkflowsRepository : NSObject {
    <SYDocumentWorkflowsDataStore> * _persistentStore;
}

- (void).cxx_destruct;
- (id)fetchUserActivityWithRelatedUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)saveUserActivity:(id)arg1 forRelatedUniqueIdentifier:(id)arg2 sourceBundleIdentifier:(id)arg3 error:(id*)arg4;

@end
