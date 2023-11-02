
@interface CKDatabaseOperation : CKOperation {
    CKDatabase * _database;
}

@property (nonatomic, retain) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseOperationInfo *operationInfo;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)database;
- (id)databaseIfNotNil;
- (long long)databaseScope;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)setDatabase:(id)arg1;
- (bool)zoneIDHasCorrectDatabaseScope:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingValues;

@end
