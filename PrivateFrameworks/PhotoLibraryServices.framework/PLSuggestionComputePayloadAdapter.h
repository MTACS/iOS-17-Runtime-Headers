
@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (bool)isValidForJournalPersistence;
- (id)payloadForChangedKeys:(id)arg1;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)suggestion;

@end
