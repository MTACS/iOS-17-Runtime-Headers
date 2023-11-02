
@interface NowPlayingMediaTypeResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithNowPlayingMediaTypeToConfirm:(long long)arg1;
+ (id)successWithResolvedNowPlayingMediaType:(long long)arg1;

- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;

@end
