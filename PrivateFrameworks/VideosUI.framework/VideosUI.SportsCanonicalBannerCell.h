
@interface VideosUI.SportsCanonicalBannerCell : VUIBaseCollectionViewCell {
    void $__lazy_storage_$_bannerPresenter;
    void accessibilityPreviouslyEnabled;
    void bannerViewModel;
    void currentBannerWidth;
    void isReloadingAfterSwiftUIHeightChange;
    void layout;
    void newBannerAccessoryView;
    void newBannerView;
    void previousViewSize;
    void scoreboardUpdateRequest;
    void scoreboardUpdateTimer;
    void sportsCanonicalBannerProxy;
    void transitionBackgroundView;
    void uberBackgroundImageViewModel;
    void uberBackgroundView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)onSystemTraitCollectionDidChange:(id)arg1;
- (void)vui_cellDidEndDisplaying;
- (void)vui_cellWillBeDisplayed;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;

@end
