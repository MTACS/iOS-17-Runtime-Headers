
@protocol ICCloudObject <NSObject, ICHasDatabaseScope>

@required

+ (NSArray *)allCloudObjectIDsInContext:(void *)arg1 passingTest:(void *)arg2; // needs 2 arg types, found 8: NSManagedObjectContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, <ICCloudObject> *, bool*, void*
+ (void)enumerateAllCloudObjectsInContext:(void *)arg1 batchSize:(void *)arg2 saveAfterBatch:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 10: NSManagedObjectContext *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ICCloudObject> *, bool*, void*
+ (void)enumerateAllCloudObjectsInContext:(void *)arg1 predicate:(void *)arg2 sortDescriptors:(void *)arg3 relationshipKeyPathsForPrefetching:(void *)arg4 batchSize:(void *)arg5 saveAfterBatch:(void *)arg6 usingBlock:(void *)arg7; // needs 7 arg types, found 13: NSManagedObjectContext *, NSPredicate *, NSArray *, NSArray *, unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <ICCloudObject> *, bool*, void*
+ (id)existingCloudObjectForRecordID:(CKRecordID *)arg1 accountID:(NSString *)arg2 context:(NSManagedObjectContext *)arg3;
+ (id)newCloudObjectForRecord:(CKRecord *)arg1 accountID:(NSString *)arg2 context:(NSManagedObjectContext *)arg3;
+ (id)newPlaceholderObjectForRecordName:(NSString *)arg1 accountID:(NSString *)arg2 context:(NSManagedObjectContext *)arg3;
+ (bool)supportsUserSpecificRecords;

- (void)deleteFromLocalDatabase;
- (void)didDeleteUserSpecificRecordID:(CKRecordID *)arg1;
- (bool)didFailToSaveUserSpecificRecordWithID:(CKRecordID *)arg1 accountID:(NSString *)arg2 error:(NSError *)arg3;
- (void)didFetchUserSpecificRecord:(CKRecord *)arg1 accountID:(NSString *)arg2 force:(bool)arg3;
- (void)didSaveUserSpecificRecord:(CKRecord *)arg1;
- (void)fixBrokenReferences;
- (bool)isInICloudAccount;
- (bool)isValidObject;
- (NSString *)loggingDescription;
- (CKRecord *)makeCloudKitRecordForApproach:(long long)arg1;
- (CKRecord *)makeCloudKitRecordForApproach:(long long)arg1 mergeableFieldState:(NSMutableDictionary *)arg2;
- (CKRecord *)makeUserSpecificCloudKitRecordForApproach:(long long)arg1;
- (bool)mergeCloudKitRecord:(CKRecord *)arg1 accountID:(NSString *)arg2 approach:(long long)arg3;
- (bool)mergeCloudKitRecord:(CKRecord *)arg1 accountID:(NSString *)arg2 approach:(long long)arg3 mergeableFieldState:(NSMutableDictionary *)arg4;
- (bool)mergeDataFromUserSpecificRecord:(CKRecord *)arg1 accountID:(NSString *)arg2;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBeFetchedFromCloud;
- (bool)needsToBePushedToCloud;
- (bool)needsToSaveUserSpecificRecord;
- (CKRecord *)newlyCreatedRecord;
- (bool)objectFailedToBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 recordID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (NSManagedObjectID *)objectID;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(CKRecord *)arg1 accountID:(NSString *)arg2;
- (void)objectWasFetchedFromCloudWithRecord:(CKRecord *)arg1 accountID:(NSString *)arg2 force:(bool)arg3;
- (void)objectWasPushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1 serverRecord:(CKRecord *)arg2;
- (void)objectWillBePushedToCloudWithOperation:(CKModifyRecordsOperation *)arg1;
- (NSArray *)objectsToBeDeletedBeforeThisObject;
- (CKRecordID *)recordID;
- (NSString *)recordType;
- (CKRecordID *)userSpecificRecordID;
- (CKRecord *)userSpecificServerRecord;
- (bool)wantsUserSpecificRecord;

@end
