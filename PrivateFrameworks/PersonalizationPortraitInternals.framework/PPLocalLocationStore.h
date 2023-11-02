
@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    _PASLock * _cache;
    NSCache * _modelCache;
    PPLocationStorage * _storage;
    PPTrialWrapper * _trialWrapper;
    bool  _useScoreInterpreter;
}

@property (nonatomic, readonly) PPLocationStorage *storage;
@property (nonatomic, readonly) bool useScoreInterpreter;

+ (id)defaultStore;
+ (bool)isLocationRelevantNamedEntityCategory:(unsigned long long)arg1;
+ (id)locationFromMapItem:(id)arg1;
+ (id)locationFromMapItemDictionary:(id)arg1;
+ (id)locationNamedEntityToPPScoredLocation:(id)arg1;
+ (unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)arg1;
+ (unsigned short)routineLOITypeToLocationCategory:(long long)arg1;
+ (id)scoredLocationFromName:(id)arg1 category:(unsigned short)arg2 score:(double)arg3 sentimentScore:(double)arg4;

- (void).cxx_destruct;
- (id)_init;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)deleteAllLocationFeedbackCountsOlderThanDate:(id)arg1;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllLocationsOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 error:(id*)arg6;
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;
- (id)homeOrWorkAddresses;
- (id)init;
- (id)initWithStorage:(id)arg1 trialWrapper:(id)arg2;
- (bool)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)locationForHome;
- (id)locationForWork;
- (id)locationRecordOfCategory:(unsigned short)arg1;
- (id)locationRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (void)processFeedback:(id)arg1;
- (bool)pruneOrphanedLocationFeedbackCountsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)rankedLocationsWithQuery:(id)arg1 clientProcessName:(id)arg2 error:(id*)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)storage;
- (bool)useScoreInterpreter;

@end
