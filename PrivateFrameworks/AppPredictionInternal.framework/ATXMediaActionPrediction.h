
@interface ATXMediaActionPrediction : NSObject

+ (id)findTopRankedINPlayMediaIntentFromArray:(id)arg1;
+ (id)resolveBucketLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (id)resolveContainerLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (id)resolveItemLevelPrediction:(id)arg1 withUpcomingMedia:(id)arg2;
+ (id)resolvePlayMediaIntent:(id)arg1 withUpcomingMedia:(id)arg2;
+ (bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1;
+ (bool)upcomingMediaPreferenceForINPlayMediaIntent:(id)arg1 withINUpcomingMediaManagerReturnValueForTests:(id)arg2;
+ (id)updatePlayMediaActionPredictions:(id)arg1 withUpcomingMedia:(id)arg2 forActionKey:(id)arg3 appActionPredictionItem:(const struct ATXPredictionItem { id x1; unsigned long long x2; float x3[817]; float x4; bool x5; bool x6; }*)arg4 appActionLogProbability:(double)arg5 statistics:(id)arg6;
+ (id)updatedPlayMediaAction:(id)arg1;
+ (id)updatedPlayMediaAction:(id)arg1 withUpcomingMedia:(id)arg2;

@end
