
@interface PDCloudStoreCounterpartRecordParserIdentifiers : NSObject {
    NSMutableDictionary * _identifierToParserZones;
}

- (void).cxx_destruct;
- (void)addRecord:(id)arg1 identifier:(id)arg2;
- (id)allRecords;
- (id)allRecordsWithIdentifier:(id)arg1;
- (id)description;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)removeIdentifiers:(id)arg1;

@end
