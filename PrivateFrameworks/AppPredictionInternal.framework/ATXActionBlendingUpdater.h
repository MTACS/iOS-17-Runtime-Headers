
@interface ATXActionBlendingUpdater : NSObject

+ (id)clientModelIdForConsumerSubType:(unsigned char)arg1;
+ (double)generateScoreForFallbackActionKey:(id)arg1 fallbackAction:(id)arg2 penalizedFallbackActions:(id)arg3;
+ (void)updateBlendingLayerWithBehavioralPredictions:(id)arg1 feedbackMetadata:(id)arg2 consumerSubType:(unsigned char)arg3;
+ (void)updateBlendingLayerWithFallbackActions;
+ (void)updateBlendingLayerWithHeuristicPredictions:(id)arg1;
+ (void)updateBlendingLayerWithLockscreenActions:(id)arg1 feedbackMetadata:(id)arg2;
+ (void)updateBlendingLayerWithRecentShortcuts:(id)arg1;

@end
