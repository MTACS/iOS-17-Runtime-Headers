
@interface _UIToolbarVisualProvider : NSObject {
    NSString * _backdropGroupName;
    UIView * _currentBackgroundView;
    UIView * _customBackgroundView;
    UIToolbar * _toolbar;
}

@property (nonatomic, readonly) <_UIBarAppearanceChangeObserver> *appearanceObserver;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backgroundFrame;
@property (nonatomic) double backgroundTransitionProgress;
@property (nonatomic, readonly) UIView *currentBackgroundView;
@property (nonatomic, retain) UIView *customBackgroundView;
@property (nonatomic) long long itemDistribution;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) bool toolbarIsSmall;
@property (nonatomic) bool useModernAppearance;

+ (bool)shouldDecodeSubviews;

- (void).cxx_destruct;
- (id)appearanceObserver;
- (id)backdropGroupName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (double)backgroundTransitionProgress;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentViewMargins;
- (id)currentBackgroundView;
- (id)customBackgroundView;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithToolbar:(id)arg1;
- (long long)itemDistribution;
- (void)layoutSubviews;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)prepare;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setItemDistribution:(long long)arg1;
- (void)setUseModernAppearance:(bool)arg1;
- (id)toolbar;
- (bool)toolbarIsSmall;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)updateAppearance;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;
- (bool)useModernAppearance;

@end
