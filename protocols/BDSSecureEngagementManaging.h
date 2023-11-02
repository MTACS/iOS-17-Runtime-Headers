
@protocol BDSSecureEngagementManaging <NSObject, BDSCloudKitSupportZoneRecovery>

@required

- (void)currentCloudSyncVersions:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BCMutableCloudSyncVersions *, void*
- (void)deleteEngagementDataForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)engagementDataForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BDSMutableSecureEngagementData *, NSError *, void*
- (void)engagementDataIncludingDeleted:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BDSMutableSecureEngagementData *, NSError *, void*
- (void)fetchEngagementDatasIncludingDeleted:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BCMutableCloudSyncVersions *, NSError *, void*
- (void)getEngagementDataChangesSince:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: BCMutableCloudSyncVersions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, BCMutableCloudSyncVersions *, NSError *, bool, void*
- (void)setEngagementData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: <BDSSecureEngagementData> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (void)setEngagementDatas:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*

@end
