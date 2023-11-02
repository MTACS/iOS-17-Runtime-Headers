
@protocol PLManagedObjectJournalEntryPayloadClass <PLJournalEntryPayload>

@required

+ (NSSet *)additionalEntityNames;
+ (NSString *)entityName;
+ (bool)isValidForPersistenceWithObjectDictionary:(NSDictionary *)arg1 additionalEntityName:(NSString *)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (NSDictionary *)modelProperties;
+ (<PLJournalEntryPayloadInsertAdapter><PLJournalEntryPayloadUpdateAdapter> *)payloadAdapterForManagedObject:(NSManagedObject *)arg1;
+ (NSDictionary *)persistedPropertyNamesForEntityNames;
+ (void)populateValidationPropertiesFromManagedObjectModel:(NSManagedObjectModel *)arg1;
+ (NSArray *)relationshipKeyPathsForPrefetching;
+ (bool)shouldPersistForChangedKeys:(NSSet *)arg1 entityName:(NSString *)arg2;
+ (NSArray *)snapshotSortDescriptors;
+ (void)validatePayloadPropertiesForManagedObjectModel:(NSManagedObjectModel *)arg1;

@end
