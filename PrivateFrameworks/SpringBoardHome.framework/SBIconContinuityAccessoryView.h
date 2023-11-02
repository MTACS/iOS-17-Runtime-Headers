
@interface SBIconContinuityAccessoryView : UIView <SBIconAccessoryView> {
    SBDarkeningImageView * _backgroundView;
    SBIconContinuityItem * _continuityItem;
    SBHomeScreenMaterialView * _foregroundView;
    <SBIconListLayout> * _listLayout;
}

@property (nonatomic, retain) UITapGestureRecognizer *actionTapGestureRecognizer;
@property (nonatomic, readonly) SBDarkeningImageView *backgroundView;
@property (nonatomic, readonly) SBIconContinuityItem *continuityItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBHomeScreenMaterialView *foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (nonatomic, retain) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;

+ (id)_imageForContinuityItem:(id)arg1 highlighted:(bool)arg2;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)backgroundView;
- (double)badgeContentScale;
- (struct CGSize { double x1; double x2; })badgeSize;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (id)continuityItem;
- (bool)displayingAccessory;
- (id)foregroundView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGPoint { double x1; double x2; })layoutOffset;
- (void)layoutSubviews;
- (id)listLayout;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(double)arg1;
- (void)setLegibilityStyle:(long long)arg1;
- (void)setListLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
