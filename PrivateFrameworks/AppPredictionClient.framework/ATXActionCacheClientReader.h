
@interface ATXActionCacheClientReader : NSObject {
    NSIndexSet * _lockscreenPredictionIndices;
    NSData * _scoredActionsChunk;
}

@property (nonatomic, readonly) NSIndexSet *lockscreenPredictionIndices;

- (void).cxx_destruct;
- (id)_getLockScreenPredictionIndices:(id)arg1;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)arg1;
- (id)actionsWithConsumerSubType:(unsigned char)arg1 limit:(long long)arg2;
- (id)actionsWithLimit:(long long)arg1 shouldFilterRestrictedAppsAndRecentEngagements:(bool)arg2;
- (unsigned long long)chunkCount;
- (id)init;
- (id)initWithChunks:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lockscreenPredictionIndices;
- (id)lockscreenPredictionIndicesUpToLimit:(long long)arg1;

@end
