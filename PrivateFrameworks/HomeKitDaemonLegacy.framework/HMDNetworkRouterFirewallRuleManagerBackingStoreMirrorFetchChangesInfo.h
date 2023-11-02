
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {
    CKServerChangeToken * _databaseChangeToken;
    NSMutableSet * _modifiedRecordIDs;
    CKServerChangeToken * _originalDatabaseChangeToken;
    NSSet * _requestedRecordIDs;
    NSArray * _signatureVerificationPublicKeys;
    NSDictionary * _zoneInfoMap;
    bool  _zonesHaveChanged;
    bool  _zonesWereDeleted;
}

@property (nonatomic, retain) CKServerChangeToken *databaseChangeToken;
@property (nonatomic, readonly) NSMutableSet *modifiedRecordIDs;
@property (nonatomic, retain) CKServerChangeToken *originalDatabaseChangeToken;
@property (nonatomic, readonly) NSSet *requestedRecordIDs;
@property (nonatomic, retain) NSArray *signatureVerificationPublicKeys;
@property (nonatomic, readonly) NSDictionary *zoneInfoMap;
@property (nonatomic, readonly) bool zonesHaveChanged;
@property (nonatomic, readonly) bool zonesWereDeleted;

- (void).cxx_destruct;
- (void)__cleanupMirroredZones:(id)arg1 cloudZones:(id)arg2 result:(id)arg3 error:(id)arg4;
- (id)databaseChangeToken;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActivity:(id)arg1 options:(id)arg2 databaseChangeToken:(id)arg3 promise:(id)arg4 xpcActivity:(id)arg5 database:(id)arg6 useAnonymousRequests:(bool)arg7 recordIDs:(id)arg8 lastSynchronizedRecordIDs:(id)arg9;
- (void)markZonesChanged;
- (void)markZonesDeleted;
- (id)modifiedRecordIDs;
- (id)originalDatabaseChangeToken;
- (id)requestedRecordIDs;
- (void)setDatabaseChangeToken:(id)arg1;
- (void)setOriginalDatabaseChangeToken:(id)arg1;
- (void)setSignatureVerificationPublicKeys:(id)arg1;
- (id)signatureVerificationPublicKeys;
- (id)zoneInfoMap;
- (bool)zonesHaveChanged;
- (bool)zonesWereDeleted;

@end
