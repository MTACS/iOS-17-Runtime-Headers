
@interface PeriodFlowResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithPeriodFlowToConfirm:(long long)arg1;
+ (id)successWithResolvedPeriodFlow:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
