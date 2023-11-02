
@protocol SymptomsTrialManagerDelegate <NSObject>

@optional

- (void)trialExperimentWithProjectIDHasBegun:(int)arg1 namespaceName:(NSString *)arg2 factorName:(NSString *)arg3 treatmentID:(NSString *)arg4 trialConfiguration:(NSDictionary *)arg5;
- (void)trialExperimentWithProjectIDHasEnded:(int)arg1 namespaceName:(NSString *)arg2 factorName:(NSString *)arg3;

@end
