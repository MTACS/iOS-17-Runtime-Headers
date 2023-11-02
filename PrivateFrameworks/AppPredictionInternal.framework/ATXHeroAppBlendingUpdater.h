
@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)clientModelForHeroAppPredictions;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)nonBlacklistedPredictionsFrom:(id)arg1;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)arg1 currentLocation:(id)arg2;

@end
