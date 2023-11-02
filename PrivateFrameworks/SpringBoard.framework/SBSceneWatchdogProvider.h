
@interface SBSceneWatchdogProvider : NSObject <FBProcessWatchdogProviding> {
    FBApplicationProcessWatchdogPolicy * _defaultProcessWatchdogProvider;
    FBSProcessWatchdogPolicy * _explicitPolicy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultSceneWatchdogProvider;
+ (id)disabledSceneWatchdogProvider;

- (void).cxx_destruct;
- (id)_scaleProvisions:(id)arg1 byFactor:(double)arg2;
- (id)initAsDisabled:(bool)arg1;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;

@end
