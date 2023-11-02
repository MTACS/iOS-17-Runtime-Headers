
@interface PNVisualOutliersWrapper : NSObject

+ (id)assetsDistancesSummary:(id)arg1 inAssets:(id)arg2 withinThresholdType:(long long)arg3;
+ (bool)isAsset:(id)arg1 similarToAnyAssets:(id)arg2 withinThresholdType:(long long)arg3;
+ (id)outlierScoresForAssets:(id)arg1;
+ (id)requiredFetchPropertySets;

@end
