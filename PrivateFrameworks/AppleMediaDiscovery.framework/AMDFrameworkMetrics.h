
@interface AMDFrameworkMetrics : NSObject

+ (void)flush;
+ (void)log:(id)arg1 withKey:(id)arg2 atVerbosity:(BOOL)arg3;
+ (void)provisionInstanceAtVerbosity:(BOOL)arg1 andAction:(id)arg2 andVersion:(id)arg3 andBuild:(id)arg4 andStorefrontId:(id)arg5 withLoggingProbability:(id)arg6;

@end
