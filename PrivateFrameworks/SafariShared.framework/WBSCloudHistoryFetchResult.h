
@interface WBSCloudHistoryFetchResult : NSObject {
    NSMutableDictionary * _mutableClientVersions;
    NSMutableDictionary * _mutableTombstonesPerProfile;
    NSMutableDictionary * _mutableVisitsPerProfile;
    NSData * _serverChangeTokenData;
}

@property (nonatomic, readonly) NSDictionary *clientVersions;
@property (nonatomic, readonly) NSSet *profiles;
@property (nonatomic, readonly) NSData *serverChangeTokenData;
@property (nonatomic, readonly) unsigned long long tombstoneCount;
@property (nonatomic, readonly) unsigned long long visitCount;

- (void).cxx_destruct;
- (void)_addCloudHistoryVisit:(id)arg1 profileServerIdentifier:(id)arg2;
- (void)_addTombstone:(id)arg1 profileServerIdentifier:(id)arg2;
- (id)_dictionaryForRecordData:(id)arg1;
- (void)_setServerChangeTokenData:(id)arg1;
- (void)_updateClientVersion:(unsigned long long)arg1 seenAt:(id)arg2;
- (void)appendRecord:(id)arg1 usingConfiguration:(id)arg2;
- (void)clearRecordsForProfileWithServerIdentifier:(id)arg1;
- (id)clientVersions;
- (id)description;
- (id)init;
- (id)profiles;
- (id)serverChangeTokenData;
- (unsigned long long)tombstoneCount;
- (id)tombstonesForProfileWithServerIdentifier:(id)arg1;
- (unsigned long long)visitCount;
- (id)visitsForProfileWithServerIdentifier:(id)arg1;

@end
