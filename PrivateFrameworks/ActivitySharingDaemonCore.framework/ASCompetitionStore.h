
@interface ASCompetitionStore : NSObject {
    NSMutableDictionary * _archivedCompetitionListCache;
    NSMutableDictionary * _currentCompetitionListCache;
    ASDatabaseClient * _databaseClient;
    NSMutableDictionary * _remoteCompetitionListCache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)_cachedCompetitionListForFriendWithUUID:(id)arg1 type:(long long)arg2 owner:(long long)arg3;
- (id)_queue_competitionListCacheForType:(long long)arg1 owner:(long long)arg2;
- (void)_queue_saveCompetitionListsToCache:(id)arg1 owner:(long long)arg2;
- (bool)_removeCompetitionsWithFriendFromDatabase:(id)arg1 type:(long long)arg2 error:(id*)arg3;
- (bool)_saveCompetitionListToDatabase:(id)arg1 owner:(long long)arg2 error:(id*)arg3;
- (bool)_saveCompetitionLists:(id)arg1 owner:(long long)arg2;
- (bool)_saveCompetitionsToDatabase:(id)arg1 friendUUID:(id)arg2 type:(long long)arg3 error:(id*)arg4;
- (id)archivedCompetitionListForFriendWithUUID:(id)arg1;
- (id)currentCompetitionListForFriendWithUUID:(id)arg1;
- (id)currentRemoteCompetitionForContact:(id)arg1;
- (void)deleteCachedCompetitions;
- (id)initWithDatabaseClient:(id)arg1;
- (bool)loadCachedCompetitions;
- (bool)saveCompetitionLists:(id)arg1;
- (bool)saveRemoteCompetitionList:(id)arg1;

@end
