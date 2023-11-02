
@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _alwaysFetchPCSFromServer;
    NSDictionary * _assetUUIDToExpectedProperties;
    bool  _atomic;
    NSData * _clientChangeTokenData;
    NSDictionary * _conflictLosersToResolveByRecordID;
    bool  _markAsParticipantNeedsNewInvitationToken;
    bool  _originatingFromDaemon;
    NSDictionary * _packageUUIDToExpectedProperties;
    NSDictionary * _pluginFieldsForRecordDeletesByID;
    NSArray * _recordIDsToDelete;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSArray * _recordsToSave;
    long long  _savePolicy;
    bool  _shouldCloneFileInAssetCache;
    bool  _shouldModifyRecordsInDatabase;
    bool  _shouldOnlySaveAssetContent;
    bool  _shouldReportRecordsInFlight;
    bool  _shouldSkipPCSRetryBehavior;
}

@property (nonatomic) bool alwaysFetchPCSFromServer;
@property (nonatomic, copy) NSDictionary *assetUUIDToExpectedProperties;
@property (nonatomic) bool atomic;
@property (nonatomic, retain) NSData *clientChangeTokenData;
@property (nonatomic, retain) NSDictionary *conflictLosersToResolveByRecordID;
@property (nonatomic) bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) bool originatingFromDaemon;
@property (nonatomic, copy) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic, copy) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic, retain) NSArray *recordIDsToDelete;
@property (nonatomic, copy) NSDictionary *recordIDsToDeleteToEtags;
@property (nonatomic, retain) NSArray *recordsToSave;
@property (nonatomic) long long savePolicy;
@property (nonatomic) bool shouldCloneFileInAssetCache;
@property (nonatomic) bool shouldModifyRecordsInDatabase;
@property (nonatomic) bool shouldOnlySaveAssetContent;
@property (nonatomic) bool shouldReportRecordsInFlight;
@property (nonatomic) bool shouldSkipPCSRetryBehavior;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInit;
- (bool)alwaysFetchPCSFromServer;
- (id)assetUUIDToExpectedProperties;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)markAsParticipantNeedsNewInvitationToken;
- (bool)originatingFromDaemon;
- (id)packageUUIDToExpectedProperties;
- (id)pluginFieldsForRecordDeletesByID;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsToSave;
- (long long)savePolicy;
- (void)setAlwaysFetchPCSFromServer:(bool)arg1;
- (void)setAssetUUIDToExpectedProperties:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setMarkAsParticipantNeedsNewInvitationToken:(bool)arg1;
- (void)setOriginatingFromDaemon:(bool)arg1;
- (void)setPackageUUIDToExpectedProperties:(id)arg1;
- (void)setPluginFieldsForRecordDeletesByID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setShouldCloneFileInAssetCache:(bool)arg1;
- (void)setShouldModifyRecordsInDatabase:(bool)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (void)setShouldReportRecordsInFlight:(bool)arg1;
- (void)setShouldSkipPCSRetryBehavior:(bool)arg1;
- (bool)shouldCloneFileInAssetCache;
- (bool)shouldModifyRecordsInDatabase;
- (bool)shouldOnlySaveAssetContent;
- (bool)shouldReportRecordsInFlight;
- (bool)shouldSkipPCSRetryBehavior;

@end
