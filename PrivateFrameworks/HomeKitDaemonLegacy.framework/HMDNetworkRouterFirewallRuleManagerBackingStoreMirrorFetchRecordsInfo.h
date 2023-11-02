
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {
    NSArray * _desiredKeys;
    CKRecordID * _recordID;
    NSMutableSet * _records;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, readonly) NSArray *desiredKeys;
@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, readonly) NSMutableSet *records;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(bool)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8;
- (id)recordID;
- (id)records;
- (id)zoneID;

@end
