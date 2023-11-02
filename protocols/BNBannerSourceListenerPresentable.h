
@protocol BNBannerSourceListenerPresentable <BSInvalidatable, BNPresentable, BNPresentableUniquelyIdentifying, BNPresentableObservable>

@required

- (int)bannerAppearState;
- (<BNBannerSourceListenerPresentableDelegate> *)delegate;
- (void)handleTemplateContentEvent:(long long)arg1;
- (id)initWithPresentable:(id <BNPresentable>)arg1;
- (id)initWithSpecification:(void *)arg1 serviceDomain:(void *)arg2 readyCompletion:(void *)arg3; // needs 3 arg types, found 9: <BNPresentableSpecifying> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BNBannerSourceListenerPresentable> *, NSError *, void*
- (bool)isReady;
- (void)makeReadyIfPossible;
- (<BNPresentable> *)presentable;
- (void)setDelegate:(id <BNBannerSourceListenerPresentableDelegate>)arg1;

@optional

- (id)initWithWithPresentable:(id <BNPresentable>)arg1;
- (id)initWithWithSpecification:(void *)arg1 serviceDomain:(void *)arg2 readyCompletion:(void *)arg3; // needs 3 arg types, found 9: <BNPresentableSpecifying> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BNBannerSourceListenerPresentable> *, NSError *, void*
- (bool)isContentHosted;
- (FBScene *)scene;

@end
