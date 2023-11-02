
@interface _CNUILikenessRenderer : NSObject <CNUILikenessRendering> {
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (struct CGImage { }*)cgImageForLikenessProvider:(id)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 alwaysUsePointSize:(bool)arg5;
+ (id)descriptorForRequiredKeys;
+ (id)renderedLikenessesForProviders:(id)arg1 likenessBadgeProviders:(id)arg2 scope:(id)arg3;

- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 schedulerProvider:(id)arg2;
- (id)likenessProvidersForBadges:(id)arg1;
- (id)likenessProvidersForBadges:(id)arg1 workScheduler:(id)arg2;
- (id)likenessProvidersForContacts:(id)arg1 likenessResolverOptions:(id)arg2 workScheduler:(id)arg3;
- (id)likenessResolver;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)renderedBasicMonogramForString:(id)arg1 color:(id)arg2 scope:(id)arg3 prohibitedSources:(long long)arg4;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessForBadge:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessForBadgeProvider:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2 workScheduler:(id)arg3;
- (id)renderedLikenessesForContacts:(id)arg1 withBadges:(id)arg2 scope:(id)arg3 workScheduler:(id)arg4;
- (id)renderedLikenessesForLikenessProviders:(id)arg1 badges:(id)arg2 scope:(id)arg3 likenessFingerprint:(id)arg4;
- (id)renderedLoadingPlaceholderForContactCount:(unsigned long long)arg1 provider:(id)arg2 scope:(id)arg3;
- (id)schedulerProvider;

@end
