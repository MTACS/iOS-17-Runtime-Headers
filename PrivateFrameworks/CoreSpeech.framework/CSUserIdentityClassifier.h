
@interface CSUserIdentityClassifier : NSObject

+ (unsigned long long)classifyUserIdentityFor:(id)arg1 withScores:(id)arg2 lowScoreThreshold:(long long)arg3 highScoreThreshold:(long long)arg4 confidentThreshold:(long long)arg5 scoreDiffThreshold:(long long)arg6;
+ (unsigned long long)classifyUserIdentityFor:(id)arg1 withScores:(id)arg2 withAsset:(id)arg3 withPhId:(unsigned long long)arg4;
+ (id)pickTopScoringProfileIdFromScores:(id)arg1;
+ (id)stringFromClassificationCategory:(unsigned long long)arg1;

@end
