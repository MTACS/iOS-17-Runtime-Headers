
@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone {
    NSSet * _modifiedRecordIDsFromLastPull;
    NSArray * _signatureVerificationPublicKeys;
    NSMutableSet * _uncommittedModifiedRecordIDsFromLastPull;
    bool  _useAnonymousRequests;
    NSSet * _watchedRecordIDs;
}

@property (nonatomic, retain) NSSet *modifiedRecordIDsFromLastPull;
@property (nonatomic, readonly) NSArray *signatureVerificationPublicKeys;
@property (nonatomic, retain) NSMutableSet *uncommittedModifiedRecordIDsFromLastPull;
@property (nonatomic, readonly) bool useAnonymousRequests;
@property (nonatomic, readonly) NSSet *watchedRecordIDs;

+ (id)__calculateDigestDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id*)arg5;
+ (id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id*)arg2;
+ (id)__getDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id*)arg5;
+ (id)__getSignatureDataFromRecord:(id)arg1 signatureKey:(id)arg2 signatureAssetKey:(id)arg3 maxSignatureSize:(unsigned long long)arg4 error:(id*)arg5;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+ (unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadata;
+ (unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;
+ (unsigned long long)__maxSizeForCKRecordString;
+ (unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2;
+ (bool)__verifyDataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 dataKey:(id)arg3 dataAssetKey:(id)arg4 maxDataSize:(unsigned long long)arg5 signatureKey:(id)arg6 signatureAssetKey:(id)arg7 maxSignatureSize:(unsigned long long)arg8 baseAccessoryIdentifier:(id*)arg9 data:(id*)arg10 error:(id*)arg11;
+ (bool)__verifyDigestDataAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 signatureVerificationPublicKeys:(id)arg4 error:(id*)arg5;
+ (bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 baseAccessoryIdentifier:(id*)arg3 data:(id*)arg4 error:(id*)arg5;
+ (bool)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id*)arg3;
+ (bool)verifyPairedMetadataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2;
- (bool)__commitLocalChanges:(id)arg1 error:(id*)arg2;
- (void)__fetchZoneChangesWithFetchInfo:(id)arg1;
- (void)__finalizeUpdatedRecordIDs;
- (void)__noteUpdatedRecordID:(id)arg1;
- (void)__recordChanged:(id)arg1 fetchInfo:(id)arg2;
- (void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3;
- (void)__retryFetchWithFetchInfo:(id)arg1;
- (void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2;
- (void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2;
- (void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(bool)arg3 fetchInfo:(id)arg4;
- (id)attributeDescriptions;
- (id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id*)arg3;
- (id)fetchChangesWithToken:(id)arg1 options:(id)arg2;
- (id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(bool)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5;
- (id)modifiedRecordIDsFromLastPull;
- (void)setModifiedRecordIDsFromLastPull:(id)arg1;
- (void)setUncommittedModifiedRecordIDsFromLastPull:(id)arg1;
- (id)signatureVerificationPublicKeys;
- (void)startUpWithLocalZone:(id)arg1;
- (id)uncommittedModifiedRecordIDsFromLastPull;
- (bool)useAnonymousRequests;
- (id)watchedRecordIDs;

@end
