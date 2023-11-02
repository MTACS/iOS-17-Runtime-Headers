
@interface SBFluidSwitcherSpaceOverlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerFooterViewDelegate> {
    double  _contentScale;
    SBFTouchPassThroughView * _contentView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentViewOffset;
    double  _contentViewScale;
    double  _cornerRadius;
    <SBFluidSwitcherSpaceOverlayAccessoryViewDelegate> * _delegate;
    bool  _drawsFocusIndicator;
    bool  _drawsFooter;
    CAShapeLayer * _focusIndicatorLayer;
    unsigned long long  _footerStyle;
    SBFluidSwitcherItemContainerFooterView * _footerView;
    SBHomeGrabberRotationView * _homeGrabberView;
    unsigned long long  _iconAlignment;
    double  _iconHitTestOutset;
    SBFluidSwitcherIconOverlayView * _iconOverlayView;
    unsigned long long  _maskedCorners;
    unsigned long long  _multiWindowIndicatorRoleMask;
    SBAppSwitcherSettings * _settings;
    SBSwitcherShelfViewController * _shelfViewController;
    double  _titleAndIconOpacity;
    NSArray * _titleItems;
    double  _titleOpacity;
    bool  _uniqueIconsOnly;
    bool  _wantsPointerInteractions;
}

@property (nonatomic) double contentScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentViewOffset;
@property (nonatomic) double contentViewScale;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFluidSwitcherSpaceOverlayAccessoryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsFocusIndicator;
@property (nonatomic) bool drawsFooter;
@property (nonatomic) unsigned long long footerStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGrabberRotationView *homeGrabberView;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic) double iconHitTestOutset;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) unsigned long long multiWindowIndicatorRoleMask;
@property (nonatomic, retain) SBSwitcherShelfViewController *shelfViewController;
@property (readonly) Class superclass;
@property (nonatomic) double titleAndIconOpacity;
@property (nonatomic, copy) NSArray *titleItems;
@property (nonatomic) double titleOpacity;
@property (nonatomic) bool uniqueIconsOnly;
@property (nonatomic) bool wantsPointerInteractions;

- (void).cxx_destruct;
- (void)_configureDebugBorder;
- (double)_inverseContentScale;
- (void)_updateContentViewLayout;
- (void)_updateFocusIndicator;
- (void)_updateFooterAnimated:(bool)arg1;
- (void)_updateFooterVisibility;
- (void)configureOverlayForIconZoomWithView:(id)arg1 crossfadeViews:(id)arg2;
- (double)contentScale;
- (struct CGPoint { double x1; double x2; })contentViewOffset;
- (double)contentViewScale;
- (double)cornerRadius;
- (void)dealloc;
- (id)delegate;
- (bool)drawsFocusIndicator;
- (bool)drawsFooter;
- (unsigned long long)footerStyle;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)homeGrabberView;
- (unsigned long long)iconAlignment;
- (double)iconHitTestOutset;
- (id)initWithDelegate:(id)arg1;
- (void)itemContainerFooterView:(id)arg1 didSelectTitleItem:(id)arg2;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (unsigned long long)multiWindowIndicatorRoleMask;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)removeIconOverlay;
- (void)setContentScale:(double)arg1;
- (void)setContentViewOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentViewScale:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDrawsFocusIndicator:(bool)arg1;
- (void)setDrawsFooter:(bool)arg1;
- (void)setFooterStyle:(unsigned long long)arg1;
- (void)setHomeGrabberView:(id)arg1;
- (void)setIconAlignment:(unsigned long long)arg1;
- (void)setIconHitTestOutset:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setMultiWindowIndicatorRoleMask:(unsigned long long)arg1;
- (void)setShelfViewController:(id)arg1;
- (void)setTitleAndIconOpacity:(double)arg1;
- (void)setTitleItems:(id)arg1;
- (void)setTitleItems:(id)arg1 animated:(bool)arg2;
- (void)setTitleOpacity:(double)arg1;
- (void)setUniqueIconsOnly:(bool)arg1;
- (void)setWantsPointerInteractions:(bool)arg1;
- (id)shelfViewController;
- (double)titleAndIconOpacity;
- (id)titleItems;
- (double)titleOpacity;
- (bool)uniqueIconsOnly;
- (bool)wantsPointerInteractions;

@end