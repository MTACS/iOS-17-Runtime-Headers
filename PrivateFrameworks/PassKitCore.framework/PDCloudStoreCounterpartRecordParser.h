
@interface PDCloudStoreCounterpartRecordParser : NSObject {
    <PDCloudStoreCounterpartRecordParserDataSource> * _dataSource;
    NSMutableDictionary * _itemTypeToParserIdentifiers;
    NSSet * _recordNamePrefixes;
}

- (void).cxx_destruct;
- (void)addRecords:(id)arg1;
- (id)allRecordsForItemType:(unsigned long long)arg1;
- (id)allRecordsWithIdentifier:(id)arg1 itemType:(unsigned long long)arg2;
- (id)description;
- (void)enumerateKeysAndObjectsForItemType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)removeIdentifiers:(id)arg1 itemType:(unsigned long long)arg2;

@end
