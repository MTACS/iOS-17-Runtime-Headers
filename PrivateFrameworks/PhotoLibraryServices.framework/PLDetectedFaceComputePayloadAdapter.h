
@interface PLDetectedFaceComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)face;
- (bool)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;

@end
