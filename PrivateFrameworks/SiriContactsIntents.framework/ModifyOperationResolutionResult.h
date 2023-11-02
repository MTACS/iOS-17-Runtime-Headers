
@interface ModifyOperationResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithModifyOperationToConfirm:(long long)arg1;
+ (id)successWithResolvedModifyOperation:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
