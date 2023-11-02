
@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting, UIPointerInteractionDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    MTMaterialView * _backgroundMaterialView;
    long long  _materialRecipe;
    UITraitCollection * _overrideTraitCollection;
    NCClickInteractionPresentedView * _presentedView;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (getter=_backgroundMaterialView, nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_materialRecipe, nonatomic, readonly) long long materialRecipe;
@property (nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (getter=_presentedView, nonatomic, readonly) NCClickInteractionPresentedView *presentedView;
@property (readonly) Class superclass;
@property (getter=_title, setter=_setTitle:, nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_backgroundMaterialView;
- (void)_configureContentViewIfNecessaryWithTitle:(id)arg1;
- (void)_configureMaterialViewsIfNecessary;
- (long long)_materialRecipe;
- (id)_newMaterialViewWithRecipe:(long long)arg1;
- (id)_presentedView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setTitle:(id)arg1;
- (id)_title;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2;
- (id)overrideTraitCollection;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
