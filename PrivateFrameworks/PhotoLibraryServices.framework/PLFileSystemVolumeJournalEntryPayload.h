
@interface PLFileSystemVolumeJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)arg1;

@end
