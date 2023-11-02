
@interface QualifierResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithQualifierToConfirm:(long long)arg1;
+ (id)successWithResolvedQualifier:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
