
@interface SBFluidSwitcherSpaceUnderlayAccessoryView : SBFTouchPassThroughClippingView <SBFluidSwitcherItemContainerHeaderViewDelegate, SBSystemPointerInteractionDelegate> {
    double  _backgroundOpacity;
    UIView * _backgroundView;
    double  _contentScale;
    SBFTouchPassThroughView * _contentView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentViewOffset;
    double  _contentViewScale;
    double  _cornerRadius;
    <SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate> * _delegate;
    bool  _headerNeedsNonAnimatedLayout;
    double  _headerOpacity;
    SBFluidSwitcherItemContainerHeaderView * _headerView;
    double  _keyboardHeight;
    unsigned long long  _maskedCorners;
    SBSeparatorView * _resizeGrabber;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _resizeGrabberBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _resizeGrabberCenter;
    bool  _resizeGrabberNeedsNonAnimatedLayout;
    double  _resizeGrabberOpacity;
    SBAppSwitcherSettings * _settings;
    double  _shadowAlpha;
    double  _shadowOffset;
    UIBezierPath * _shadowPath;
    long long  _shadowStyle;
    SBAppSwitcherPageShadowView * _shadowView;
    SBSystemPointerInteractionManager * _systemPointerInteractionManager;
    NSArray * _titleItems;
    double  _titleOpacity;
}

@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentViewOffset;
@property (nonatomic) double contentViewScale;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFluidSwitcherSpaceUnderlayAccessoryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerOpacity;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } resizeGrabberBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } resizeGrabberCenter;
@property (nonatomic) double resizeGrabberOpacity;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double shadowOffset;
@property (nonatomic, retain) UIBezierPath *shadowPath;
@property (nonatomic) long long shadowStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *titleItems;
@property (nonatomic) double titleOpacity;

- (void).cxx_destruct;
- (void)_configureDebugBorder;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewVisibility;
- (void)_updateContentView;
- (void)_updateHeaderAnimated:(bool)arg1;
- (void)_updateResizeGrabber;
- (void)_updateResizeGrabberVisibility;
- (void)_updateShadowView;
- (void)_updateShadowVisibility;
- (double)backgroundOpacity;
- (double)contentScale;
- (struct CGPoint { double x1; double x2; })contentViewOffset;
- (double)contentViewScale;
- (double)cornerRadius;
- (void)dealloc;
- (id)delegate;
- (double)headerOpacity;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1 systemPointerInteractionManager:(id)arg2;
- (void)itemContainerHeaderView:(id)arg1 didSelectTitleItem:(id)arg2;
- (double)keyboardHeight;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pointerInteractionHitTestInsetsForView:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resizeGrabberBounds;
- (struct CGPoint { double x1; double x2; })resizeGrabberCenter;
- (double)resizeGrabberOpacity;
- (void)setBackgroundOpacity:(double)arg1;
- (void)setContentScale:(double)arg1;
- (void)setContentViewOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentViewScale:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHeaderOpacity:(double)arg1 updateMode:(long long)arg2 settings:(id)arg3 completion:(id /* block */)arg4;
- (void)setKeyboardHeight:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setResizeGrabberBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResizeGrabberCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setResizeGrabberOpacity:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setShadowOffset:(double)arg1;
- (void)setShadowPath:(id)arg1;
- (void)setShadowStyle:(long long)arg1;
- (void)setTitleItems:(id)arg1 animated:(bool)arg2;
- (void)setTitleOpacity:(double)arg1;
- (double)shadowAlpha;
- (double)shadowOffset;
- (id)shadowPath;
- (long long)shadowStyle;
- (bool)shouldBeginPointerInteractionRequest:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forView:(id)arg3;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (id)titleItems;
- (double)titleOpacity;

@end
