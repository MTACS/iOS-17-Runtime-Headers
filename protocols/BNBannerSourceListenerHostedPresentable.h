
@protocol BNBannerSourceListenerHostedPresentable <BNBannerSourceListenerPresentable, BNHostedContentProviding, FBSceneDelegate>

@required

- (id)initWithSpecification:(void *)arg1 serviceDomain:(void *)arg2 scene:(void *)arg3 readyCompletion:(void *)arg4; // needs 4 arg types, found 10: <BNPresentableSpecifying> *, NSString *, FBScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BNBannerSourceListenerPresentable> *, NSError *, void*
- (bool)isHostedContent;
- (FBScene *)scene;

@optional

- (id)initWithWithSpecification:(void *)arg1 serviceDomain:(void *)arg2 scene:(void *)arg3 readyCompletion:(void *)arg4; // needs 4 arg types, found 10: <BNPresentableSpecifying> *, NSString *, FBScene *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BNBannerSourceListenerPresentable> *, NSError *, void*

@end
