
@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByKey;
    CKQueryCursor * _cursor;
    NSArray * _desiredKeys;
    bool  _fetchAllResults;
    CKQuery * _query;
    unsigned long long  _resultsLimit;
    bool  _shouldFetchAssetContent;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByKey;
@property (nonatomic, retain) CKQueryCursor *cursor;
@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic) bool fetchAllResults;
@property (nonatomic, retain) CKQuery *query;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) bool shouldFetchAssetContent;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByKey;
- (id)cursor;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllResults;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (unsigned long long)resultsLimit;
- (bool)shouldFetchAssetContent;
- (id)zoneID;

@end
