
@interface SYDocumentWorkflowsCoreDataStore : NSObject <SYDocumentWorkflowsDataStore> {
    NSPersistentContainer * _persistentContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchRecordWithRelatedUniqueIdentifier:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)_saveContext:(id)arg1 error:(id*)arg2;
- (id)fetchUserActivityWithRelatedUniqueIdentifier:(id)arg1 error:(id*)arg2;
- (id)modelURL;
- (id)persistentContainer;
- (bool)saveUserActivity:(id)arg1 forRelatedUniqueIdentifier:(id)arg2 sourceBundleIdentifier:(id)arg3 error:(id*)arg4;
- (void)setPersistentContainer:(id)arg1;

@end
