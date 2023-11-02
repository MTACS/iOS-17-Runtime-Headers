
@interface DNDSModernAssertionSyncMetadataStore : NSObject <DNDSBackingStoreRecord, NSCopying> {
    NSMutableDictionary * _lastReceivedStoreDate;
    NSMutableDictionary * _lastSentStoreDate;
    NSMutableDictionary * _pendingLastSentStoreDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSMutableDictionary *lastReceivedStoreDate;
@property (nonatomic, readonly, copy) NSMutableDictionary *lastSentStoreDate;
@property (nonatomic, readonly, copy) NSMutableDictionary *pendingLastSentStoreDate;
@property (readonly) Class superclass;

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithLastReceivedStoreDate:(id)arg1 lastSentStoreDate:(id)arg2 pendingLastSentStoreDate:(id)arg3;
- (id)_initWithStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lastReceivedStoreDate;
- (id)lastSentStoreDate;
- (id)pendingLastSentStoreDate;

@end
