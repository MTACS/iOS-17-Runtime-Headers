
@interface PLUserFeedback : PLManagedObject <PLCloudDeletable, PLFileSystemMetadataPersistence>

@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, retain) NSString *context;
@property (nonatomic) short creationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *detailedDescription;
@property (nonatomic) short feature;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) PLMemory *memory;
@property (nonatomic, retain) PLPerson *person;
@property (readonly) Class superclass;
@property (nonatomic) short type;
@property (nonatomic) NSString *uuid;

+ (id)_userFeedbacksMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)entityName;
+ (id)insertIntoManagedObjectContext:(id)arg1 withDictionaryRepresentation:(id)arg2;
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2;
+ (id)newestUserFeedbackInSet:(id)arg1;
+ (bool)shouldHandleCPLSuggestionChange:(id)arg1;
+ (id)updateUserFeedback:(id)arg1 withCPLSuggestionChange:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)userFeedbackWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)userFeedbacksToUploadInManagedObjectContext:(id)arg1 limit:(long long)arg2;
+ (id)userFeedbacksWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;

- (bool)_isPersonFeatureAutonamingType;
- (id)_objectUsedForPersistence;
- (bool)_relationshipsInInvalidState;
- (bool)_validateNonNilUUID:(id*)arg1;
- (bool)_validateRelationshipConstraintForInsert:(bool)arg1 error:(id*)arg2;
- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (id)detailedDescription;
- (id)dictionaryRepresentation;
- (bool)isSyncableChange;
- (bool)isValidForPersistence;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)prepareForDeletion;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (bool)supportsCloudUpload;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;

@end
