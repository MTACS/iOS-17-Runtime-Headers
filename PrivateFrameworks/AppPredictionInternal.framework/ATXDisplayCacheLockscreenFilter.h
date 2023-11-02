
@interface ATXDisplayCacheLockscreenFilter : NSObject

+ (unsigned long long)_getPredictionConfidenceForActions:(id)arg1;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)arg1;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)arg1 criteria:(id /* block */)arg2;
+ (bool)shouldPredictActionOnLockScreen:(id)arg1;

@end
