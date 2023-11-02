
@interface SBIconAddAccessoryView : UIView <SBIconAccessoryView> {
    UITapGestureRecognizer * _actionTapGestureRecognizer;
    UIImageView * _addImageView;
    <SBIconListLayout> * _listLayout;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (nonatomic, retain) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_hitTestPadding;
- (struct CGPoint { double x1; double x2; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)actionTapGestureRecognizer;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (bool)displayingAccessory;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)listLayout;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(double)arg1;
- (void)setActionTapGestureRecognizer:(id)arg1;
- (void)setListLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
