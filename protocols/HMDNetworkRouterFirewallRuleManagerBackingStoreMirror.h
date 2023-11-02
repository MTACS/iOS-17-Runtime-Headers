
@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreMirror <NSObject>

@required

- (bool)addOverrides:(NSDictionary *)arg1 replace:(bool)arg2 options:(HMBProcessingOptions *)arg3 error:(id*)arg4;
- (NSNumber *)cloudFetchNeededForRecordIDs:(NSSet *)arg1 error:(id*)arg2;
- (NSDictionary *)fetchAllDataForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id*)arg3;
- (NSDictionary *)fetchAllDataForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id*)arg3;
- (NSDictionary *)fetchAllDataWithOptions:(HMBProcessingOptions *)arg1 error:(id*)arg2;
- (NSDictionary *)fetchAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id*)arg2;
- (void)fetchCloudChangesForRecordIDs:(void *)arg1 options:(void *)arg2 ignoreLastSynchronizedRecords:(void *)arg3 xpcActivity:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: NSSet *, HMBProcessingOptions *, bool, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, NSError *, void*
- (void)fetchCloudRecordIDsForZoneID:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CKRecordZoneID *, HMBProcessingOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)fetchCloudRecordsForZoneID:(void *)arg1 recordID:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: CKRecordZoneID *, CKRecordID *, HMBProcessingOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (NSDictionary *)fetchOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id*)arg3;
- (NSDictionary *)fetchOverridesForZoneName:(NSString *)arg1 options:(HMBProcessingOptions *)arg2 error:(id*)arg3;
- (bool)removeAllLocalRulesWithOptions:(HMBProcessingOptions *)arg1 error:(id*)arg2;
- (bool)removeAllOverridesWithOptions:(HMBProcessingOptions *)arg1 error:(id*)arg2;
- (bool)removeOverridesForRecordIDs:(NSSet *)arg1 options:(HMBProcessingOptions *)arg2 error:(id*)arg3;
- (bool)removeOverridesForZoneName:(NSString *)arg1 recordName:(NSString *)arg2 options:(HMBProcessingOptions *)arg3 error:(id*)arg4;
- (NAFuture *)shutdownFuture;
- (NAFuture *)startupFuture;

@end
