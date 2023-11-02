
@interface SFPinnableBanner : UIView {
    UIView * _bottomSeparator;
    bool  _initiallyBehindNavigationBar;
    SFOverlayProvider * _overlayProvider;
    NSNumber * _pinnedOffset;
    bool  _pinnedToTop;
    bool  _separableFromStatusBar;
    SFBannerTheme * _theme;
    UIView * _topSeparator;
}

@property (getter=isInitiallyBehindNavigationBar, nonatomic) bool initiallyBehindNavigationBar;
@property (nonatomic, readonly) SFOverlayProvider *overlayProvider;
@property (nonatomic, retain) NSNumber *pinnedOffset;
@property (getter=isPinnedToTop, nonatomic) bool pinnedToTop;
@property (nonatomic) bool separableFromStatusBar;
@property (nonatomic, readonly) bool shouldUsePlainTheme;
@property (nonatomic) bool showsBottomSeparator;
@property (nonatomic) bool showsTopSeparator;
@property (nonatomic, retain) SFBannerTheme *theme;

+ (bool)omitsBottomSeparator;
+ (double)pinAnimationDelay;
+ (double)unpinAnimationDelay;
+ (double)unpinAnimationDuration;

- (void).cxx_destruct;
- (void)_setUpSeparators;
- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateBannerLayout;
- (bool)isInitiallyBehindNavigationBar;
- (bool)isPinnedToTop;
- (id)overlayProvider;
- (id)pinnedOffset;
- (bool)separableFromStatusBar;
- (void)setInitiallyBehindNavigationBar:(bool)arg1;
- (void)setPinnedOffset:(id)arg1;
- (void)setPinnedToTop:(bool)arg1;
- (void)setSeparableFromStatusBar:(bool)arg1;
- (void)setShowsBottomSeparator:(bool)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (void)setTheme:(id)arg1;
- (void)setTheme:(id)arg1 animated:(bool)arg2;
- (bool)shouldUsePlainTheme;
- (bool)showsBottomSeparator;
- (bool)showsTopSeparator;
- (id)theme;
- (void)themeDidChange;

@end
