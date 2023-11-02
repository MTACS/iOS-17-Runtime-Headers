
@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSDictionary * _configurationsByRecordZoneID;
    long long  _errorReportingStyle;
    bool  _fetchAllChanges;
    bool  _forcePCSDecryptionAttempt;
    NSArray * _recordZoneIDs;
    bool  _shouldFetchAssetContents;
    NSDictionary * _supplementalChangeTokenByZoneID;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, retain) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) long long errorReportingStyle;
@property (nonatomic) bool fetchAllChanges;
@property (nonatomic) bool forcePCSDecryptionAttempt;
@property (nonatomic, retain) NSArray *recordZoneIDs;
@property (nonatomic) bool shouldFetchAssetContents;
@property (nonatomic, retain) NSDictionary *supplementalChangeTokenByZoneID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (id)configurationsByRecordZoneID;
- (void)encodeWithCoder:(id)arg1;
- (long long)errorReportingStyle;
- (bool)fetchAllChanges;
- (bool)forcePCSDecryptionAttempt;
- (id)initWithCoder:(id)arg1;
- (id)recordZoneIDs;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setConfigurationsByRecordZoneID:(id)arg1;
- (void)setErrorReportingStyle:(long long)arg1;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setForcePCSDecryptionAttempt:(bool)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setShouldFetchAssetContents:(bool)arg1;
- (void)setSupplementalChangeTokenByZoneID:(id)arg1;
- (bool)shouldFetchAssetContents;
- (id)supplementalChangeTokenByZoneID;

@end
