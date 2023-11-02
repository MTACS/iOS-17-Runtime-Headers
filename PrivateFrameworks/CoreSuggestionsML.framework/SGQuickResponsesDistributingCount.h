
@interface SGQuickResponsesDistributingCount : NSObject

+ (id)numResponsesForScores:(id)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
+ (id)probsForClasses:(id)arg1 withCount:(unsigned long long)arg2;
+ (unsigned long long)responsesToFillForResponseCount:(unsigned long long)arg1 config:(id)arg2;
+ (unsigned long long)validClassesForClassCount:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;

@end
