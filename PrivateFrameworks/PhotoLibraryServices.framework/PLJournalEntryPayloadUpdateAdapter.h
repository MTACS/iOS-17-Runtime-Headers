
@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject * _managedObject;
}

- (void).cxx_destruct;
- (id)initWithManagedObject:(id)arg1;
- (bool)isValidForJournalPersistence;
- (id)managedObject;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)arg1;
- (bool)validForPersistenceChangedForChangedKeys:(id)arg1;

@end
