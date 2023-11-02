
@interface ATXHeroDataServerHelper : NSObject

+ (id)bundleIdForPrediction:(id)arg1;
+ (bool)canPredictClipsGivenRecentMotion;
+ (id)heroAppPredictionsSortedByDistance:(id)arg1 currentLocation:(id)arg2;
+ (id)inRadiusPredictionsFrom:(id)arg1 currentLocation:(id)arg2;
+ (bool)isPredictionInRadius:(id)arg1 currentLocation:(id)arg2;

- (id)init;

@end
