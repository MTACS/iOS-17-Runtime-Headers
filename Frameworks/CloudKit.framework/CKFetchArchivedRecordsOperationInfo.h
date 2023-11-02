
@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSDictionary * _configurationsByRecordZoneID;
    bool  _fetchAllChanges;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (id)configurationsByRecordZoneID;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)recordZoneIDs;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (bool)shouldFetchAssetContents;

@end
