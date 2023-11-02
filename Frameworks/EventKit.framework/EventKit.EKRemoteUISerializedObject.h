
@interface EventKit.EKRemoteUISerializedObject : NSObject {
    void objectIDToChangeSetDictionaryMap;
    void objectIDToPersistentDictionaryMap;
    void serializedObjectIDDictionary;
}

@property (nonatomic, readonly) NSDictionary *objectIDToChangeSetDictionaryMap;
@property (nonatomic, readonly) NSDictionary *objectIDToPersistentDictionaryMap;
@property (nonatomic, readonly) NSDictionary *serializedObjectIDDictionary;

- (void).cxx_destruct;
- (id)init;
- (id)objectIDToChangeSetDictionaryMap;
- (id)objectIDToPersistentDictionaryMap;
- (id)serializedObjectIDDictionary;

@end
