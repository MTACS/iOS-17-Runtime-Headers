
@interface PLKeywordJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (nonatomic, readonly) NSString *title;

+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertKeywordFromDataInManagedObjectContext:(id)arg1;
- (id)title;

@end
