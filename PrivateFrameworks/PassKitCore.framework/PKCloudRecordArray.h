
@interface PKCloudRecordArray : NSObject <NSSecureCoding> {
    NSMutableDictionary * _cloudRecordByDatabase;
    long long  _recordsFetchedCount;
    NSMutableDictionary * _reportItemsByAccountIdentifier;
}

@property (nonatomic, retain) NSMutableDictionary *cloudRecordByDatabase;
@property (nonatomic) long long recordsFetchedCount;
@property (nonatomic, retain) NSMutableDictionary *reportItemsByAccountIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(bool)arg1 includeItem:(bool)arg2;
- (void)addCloudRecord:(id)arg1 forContainerDatabaseIdentifier:(id)arg2;
- (void)addCountToRecordsFetched:(long long)arg1;
- (void)addTransactionSyncReportItem:(id)arg1 forAccountIdentifier:(id)arg2;
- (void)addTransactionSyncReportItems:(id)arg1 forAccountIdentifier:(id)arg2;
- (id)allItems;
- (id)allObjects;
- (id)allObjectsByDatabaseIdentifier;
- (id)allRecordIDs;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)arg1;
- (void)applyCloudRecordArray:(id)arg1;
- (id)cloudRecordByDatabase;
- (long long)count;
- (id)description;
- (id)descriptionWithItem:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)recordsFetchedCount;
- (id)reportItemsByAccountIdentifier;
- (void)setCloudRecordByDatabase:(id)arg1;
- (void)setRecordsFetchedCount:(long long)arg1;
- (void)setReportItemsByAccountIdentifier:(id)arg1;
- (id)transactionSyncReportItemsByAccountIdentifier;

@end
