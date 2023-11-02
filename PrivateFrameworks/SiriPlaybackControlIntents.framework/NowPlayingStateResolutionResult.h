
@interface NowPlayingStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithNowPlayingStateToConfirm:(long long)arg1;
+ (id)successWithResolvedNowPlayingState:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
