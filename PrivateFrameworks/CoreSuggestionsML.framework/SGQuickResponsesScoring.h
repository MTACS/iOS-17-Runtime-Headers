
@interface SGQuickResponsesScoring : NSObject

+ (id)categoryScoresWithModelScores:(id)arg1 configReplies:(id)arg2;
+ (id)modelScoresWithUnweightedScores:(id)arg1 configReplies:(id)arg2;
+ (id)sortedWithUnweightedScores:(id)arg1 config:(id)arg2;

@end
