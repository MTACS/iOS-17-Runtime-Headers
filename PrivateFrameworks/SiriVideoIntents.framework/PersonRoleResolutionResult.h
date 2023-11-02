
@interface PersonRoleResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithPersonRoleToConfirm:(long long)arg1;
+ (id)successWithResolvedPersonRole:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
