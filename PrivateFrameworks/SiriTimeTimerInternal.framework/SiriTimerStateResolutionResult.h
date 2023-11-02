
@interface SiriTimerStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSiriTimerStateToConfirm:(long long)arg1;
+ (id)successWithResolvedSiriTimerState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
