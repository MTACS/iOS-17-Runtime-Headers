
@protocol CNUILikenessRendering <NSObject>

@required

+ (<CNKeyDescriptor> *)descriptorForRequiredKeys;

- (CNUIImage *)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNUIImage *)renderedBasicMonogramForString:(NSString *)arg1 color:(PRMonogramColor *)arg2 scope:(CNUILikenessRenderingScope *)arg3 prohibitedSources:(long long)arg4;
- (CNObservable *)renderedBasicMonogramFromString:(CNObservable *)arg1 scope:(CNUILikenessRenderingScope *)arg2;
- (CNObservable *)renderedLikenessForBadge:(id <CNUILikenessBadge>)arg1 scope:(CNUILikenessRenderingScope *)arg2 workScheduler:(id <CNScheduler>)arg3;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 scope:(CNUILikenessRenderingScope *)arg2 workScheduler:(id <CNScheduler>)arg3;
- (CNObservable *)renderedLikenessesForContacts:(NSArray *)arg1 withBadges:(NSArray *)arg2 scope:(CNUILikenessRenderingScope *)arg3 workScheduler:(id <CNScheduler>)arg4;

@end
