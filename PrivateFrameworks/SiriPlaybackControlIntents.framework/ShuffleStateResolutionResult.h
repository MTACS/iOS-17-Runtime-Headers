
@interface ShuffleStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithShuffleStateToConfirm:(long long)arg1;
+ (id)successWithResolvedShuffleState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
