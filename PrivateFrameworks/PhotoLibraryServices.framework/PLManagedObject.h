
@interface PLManagedObject : NSManagedObject <PLJournalEntryPayloadUpdateAdapter, PLValidatedManagedObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRegisteredWithUserInterfaceContext;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSString *shortObjectIDURI;
@property (readonly) Class superclass;

+ (id)attributeValidationRules;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)objectIDDescription;

- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (bool)isRegisteredWithUserInterfaceContext;
- (bool)isSyncableChange;
- (bool)isValidForJournalPersistence;
- (id)managedObject;
- (id)pathManager;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)arg1;
- (id)photoLibrary;
- (void)pl_safeSetValue:(id)arg1 forKey:(id)arg2 valueDidChangeHandler:(id /* block */)arg3;
- (id)shortObjectIDURI;
- (bool)supportsCloudUpload;
- (bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (void)willSave;

@end
