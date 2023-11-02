
@interface SGQuickResponsesToRobots : NSObject

+ (float)allCapsRatio:(id)arg1;
+ (id)contactStore;
+ (bool)insignificantSender:(id)arg1;
+ (bool)presentInContext:(id)arg1 context:(id)arg2 startIdx:(long long)arg3 endIdx:(long long)arg4;
+ (id)repliesToRobot:(id)arg1 language:(id)arg2 recipients:(id)arg3;
+ (id)repliesToRobot:(id)arg1 language:(id)arg2 recipients:(id)arg3 config:(id)arg4;
+ (void)warmup;

@end
