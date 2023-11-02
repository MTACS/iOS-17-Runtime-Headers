
@interface ATXMLActionProducer : NSObject {
    NSString * _cacheBasePath;
}

+ (id)consumerSubTypesToUpdate;
+ (id)predictionChunksForActionResults:(id)arg1;

- (void).cxx_destruct;
- (id)_cachePathForConsumerSubtype:(unsigned char)arg1;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)arg1 cacheFileData:(id)arg2;
- (bool)_writeIntermediateCacheForConsumerSubType:(unsigned char)arg1 actionPredictionCandidates:(id)arg2 remainingPredictionItems:(void*)arg3;
- (id)consumerSubTypesToInvalidateForTTL:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(bool)arg3;
- (id)init;
- (void)invalidateCacheForConsumerSubType:(unsigned char)arg1 actionPredictionCandidates:(id)arg2 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x1; struct ATXPredictionItem {} *x2; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem {} *x_3_1_1; } x3; })arg3;
- (void)invalidateCacheForConsumerSubTypes:(id)arg1 featureCache:(id)arg2;
- (id)lockscreenActionsFromPredictions:(id)arg1;
- (id)produceActions;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)arg1;
- (void)updateBlendingLayerForAllConsumerSubTypes;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)arg1;
- (void)updateBlendingLayerForHomeScreen;
- (void)updateBlendingLayerForLockscreen;
- (void)updateBlendingLayerForSpotlight;
- (bool)writeCacheIfNotExistsForConsumerSubType:(unsigned char)arg1;

@end
