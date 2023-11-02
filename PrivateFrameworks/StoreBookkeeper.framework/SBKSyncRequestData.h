
@interface SBKSyncRequestData : SBKRequestData

- (bool)_needsConflictDetection;
- (id)_serializableConflictDetectionOrdinalForKey:(id)arg1;
- (id)_serializableConflictDetectionValue;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1;
- (id)serializableRequestBodyPropertyList;
- (id)syncTransaction;

@end
