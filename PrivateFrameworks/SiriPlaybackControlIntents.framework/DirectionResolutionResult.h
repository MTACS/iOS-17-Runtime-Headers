
@interface DirectionResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithDirectionToConfirm:(long long)arg1;
+ (id)successWithResolvedDirection:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
