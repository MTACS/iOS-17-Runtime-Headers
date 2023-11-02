
@interface SFClipLinkBanner : SFLinkBanner <SFAppSuggestionBanner> {
    SFClipLink * _clipLink;
    SFOverlayProvider * _overlayProvider;
    <SFAppSuggestionBannerDelegate> * delegate;
}

@property (nonatomic, readonly) SFClipLink *clipLink;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAppSuggestionBannerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)getClipLinkBannerForClipLink:(id)arg1 openActionHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_initWithClipLink:(id)arg1 openActionHandler:(id /* block */)arg2;
- (id)clipLink;
- (id)delegate;
- (id)overlayProvider;
- (void)setDelegate:(id)arg1;

@end
