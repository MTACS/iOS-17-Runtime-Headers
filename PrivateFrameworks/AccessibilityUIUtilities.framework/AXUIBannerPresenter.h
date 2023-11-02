
@interface AXUIBannerPresenter : AXUIFloatingViewPresenter {
    AXUIBannerView * _bannerView;
}

@property (nonatomic, retain) AXUIBannerView *bannerView;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)bannerView;
- (id)initWithContainingView:(id)arg1;
- (void)presentBannerViewWithText:(id)arg1 duration:(double)arg2;
- (void)presentBannerViewWithText:(id)arg1 secondaryText:(id)arg2 duration:(double)arg3 fromUserAction:(bool)arg4;
- (void)presentCustomView:(id)arg1 duration:(double)arg2;
- (void)setBannerView:(id)arg1;

@end
