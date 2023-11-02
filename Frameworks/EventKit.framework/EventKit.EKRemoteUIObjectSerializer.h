
@interface EventKit.EKRemoteUIObjectSerializer : NSObject {
    void kEKCachedMeltedObjectsKey;
    void kEKChangeSetKey;
    void kEKChangeSetMultiValueAdditionsKey;
    void kEKChangeSetMultiValueRemovalsKey;
    void kEKChangeSetSingleValueChangesKey;
    void kEKIsPendingInsertKey;
    void kEKPersistentObjectKey;
}

- (void).cxx_destruct;
- (id)deserializedRepresentationWithSerializedDictionary:(id)arg1 objectIDToChangeSetDictionaryMap:(id)arg2 objectIDToPersistentDictionaryMap:(id)arg3 eventStore:(id)arg4 occurrenceDate:(id)arg5;
- (id)init;
- (id)serializedRepresentationWithEkObject:(id)arg1;
- (id)serializedRepresentationWithEkObject:(id)arg1 obfuscateKeyProperties:(bool)arg2;

@end
