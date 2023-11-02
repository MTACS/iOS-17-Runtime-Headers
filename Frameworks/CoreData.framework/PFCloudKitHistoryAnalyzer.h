
@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {
    NSPersistentHistoryToken * _lastProcessedToken;
    NSManagedObjectContext * _managedObjectContext;
}

+ (bool)isPrivateContextName:(id)arg1;
+ (bool)isPrivateTransaction:(id)arg1;
+ (bool)isPrivateTransactionAuthor:(id)arg1;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;
- (bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3;

@end
