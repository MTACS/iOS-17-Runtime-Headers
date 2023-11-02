
@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1 additionalEntityName:(id)arg2;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (id)persistedPropertyNamesForEntityNames;

- (void)updateAlbum:(id)arg1 includePendingChanges:(bool)arg2;

@end
