
@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying> {
    UIBarButtonItem * _barButtonItem;
    _UIButtonBarButton * _button;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (nonatomic, readonly) UIView *alignmentViewForStaticNavBarButtonTrailing;
@property (nonatomic) bool backButtonConstraintsActive;
@property (nonatomic) bool backButtonMaskEnabled;
@property (nonatomic, readonly) UIView *backIndicatorView;
@property (nonatomic, readonly) _UIButtonBarButton *button;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, copy) UIColor *tintColor;

+ (void)registerPlatformVisualProviderClass:(Class)arg1 forIdiom:(long long)arg2;
+ (id)visualProviderForIdiom:(long long)arg1;

- (void).cxx_destruct;
- (id)alignmentViewForStaticNavBarButtonLeading;
- (id)alignmentViewForStaticNavBarButtonTrailing;
- (bool)backButtonConstraintsActive;
- (bool)backButtonMaskEnabled;
- (id)backIndicatorView;
- (id)button;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonAlignmentRectInsets:(id)arg1;
- (Class)buttonBarButtonClass;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;
- (id)buttonContextMenuTargetedPreview;
- (Class)buttonControlClass;
- (bool)buttonEnabledState:(id)arg1 forRequestedState:(bool)arg2;
- (bool)buttonHeldState:(id)arg1 forRequestedState:(bool)arg2;
- (bool)buttonHighlitedState:(id)arg1 forRequestedState:(bool)arg2;
- (struct CGSize { double x1; double x2; })buttonImageViewSize:(id)arg1;
- (struct CGSize { double x1; double x2; })buttonIntrinsicContentSize:(id)arg1;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(id /* block */)arg2;
- (bool)buttonSelectionState:(id)arg1 forRequestedState:(bool)arg2;
- (id)buttonSpringLoadedInteractionBehavior;
- (id)buttonSpringLoadedInteractionEffect;
- (void)buttonWillMoveToSuperview:(id)arg1;
- (void)buttonWillMoveToWindow:(id)arg1;
- (bool)canUpdateMenuInPlace;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)focusEffect;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingPointerShapeForView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inContainer:(id)arg3;
- (struct CGPoint { double x1; double x2; })menuAnchorPoint;
- (struct CGPoint { double x1; double x2; })pointerPreviewCenter;
- (id)pointerPreviewParameters;
- (id)pointerShapeInContainer:(id)arg1;
- (void)pointerWillEnter:(id)arg1;
- (void)pointerWillExit:(id)arg1;
- (void)reload;
- (void)resetButtonHasHighlighted;
- (void)setBackButtonConstraintsActive:(bool)arg1;
- (void)setBackButtonMaskEnabled:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldLift;
- (bool)shouldSuppressPointerSpecularFilter;
- (bool)supportsBackButtons;
- (id)symbolImageView;
- (id)tintColor;
- (void)updateButton:(id)arg1 appearance:(id)arg2;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forFocusedState:(bool)arg2;
- (void)updateButton:(id)arg1 forHeldState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(bool)arg2;
- (void)updateImage;
- (void)updateMenu;

@end
