
@protocol HRERecommendationSource <NSObject>

@required

- (unsigned long long)disablingOptions;
- (NAFuture *)recommendationsForHome:(HMHome *)arg1 withServiceLikeItems:(NSArray *)arg2 accessoryTypeGroup:(HFAccessoryTypeGroup *)arg3 options:(unsigned long long)arg4;

@end
