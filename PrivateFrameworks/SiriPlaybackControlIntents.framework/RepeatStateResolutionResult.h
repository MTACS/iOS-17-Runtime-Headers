
@interface RepeatStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithRepeatStateToConfirm:(long long)arg1;
+ (id)successWithResolvedRepeatState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
