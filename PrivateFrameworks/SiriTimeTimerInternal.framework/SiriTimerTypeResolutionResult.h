
@interface SiriTimerTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithSiriTimerTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedSiriTimerType:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
