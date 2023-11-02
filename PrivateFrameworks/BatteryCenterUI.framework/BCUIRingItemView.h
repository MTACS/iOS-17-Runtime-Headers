
@interface BCUIRingItemView : UIView <BCUIBatteryDeviceDisplaying, MTVisualStylingRequiring> {
    UILabel * _chargeLabel;
    BCUIChargeRing * _chargeRing;
    bool  _empty;
    NSNumberFormatter * _percentChargeFormatter;
    long long  _ringItemViewStyle;
    double  _ringScale;
    double  _scaleFactor;
    <UIViewControllerTransitionCoordinator> * _transitionCoordinator;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (getter=isCharging, nonatomic) bool charging;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) UIImage *glyph;
@property (readonly) unsigned long long hash;
@property (getter=isLowCharge, nonatomic) bool lowCharge;
@property (getter=isLowPowerModeEnabled, nonatomic) bool lowPowerModeEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long percentCharge;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic) long long ringItemViewStyle;
@property (nonatomic) double ringLineWidth;
@property (nonatomic) double ringScale;
@property (nonatomic) double scaleFactor;
@property (readonly) Class superclass;
@property (nonatomic) <UIViewControllerTransitionCoordinator> *transitionCoordinator;

+ (double)_ringLabelPaddingForContentSizeCategory:(id)arg1;
+ (bool)isAX1PlusLayoutRequiredForContentSizeCategory:(id)arg1;
+ (bool)isAX3PlusLayoutRequiredForContentSizeCategory:(id)arg1;

- (void).cxx_destruct;
- (void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
- (id)_chargeRing;
- (void)_configureChargeLabelForStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChargeLabelWithSize:(struct CGSize { double x1; double x2; })arg1 baseLineOffsetFromBoundsTop:(double)arg2 chargeRingSize:(struct CGSize { double x1; double x2; })arg3 style:(long long)arg4 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 scale:(double)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForChargeRingWithSize:(struct CGSize { double x1; double x2; })arg1 chargeLabelSize:(struct CGSize { double x1; double x2; })arg2 style:(long long)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 scale:(double)arg5;
- (bool)_isPercentSymbolEnabledForRingItemStyle:(long long)arg1 andContentSizeCategory:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_largestPossibleFrameForChargeLabelGivenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chargeRingSize:(struct CGSize { double x1; double x2; })arg2 andRingLabelPadding:(double)arg3;
- (id)_lazyPercentChargeFormatter;
- (id)_percentChargeString:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForChargeLabel:(id)arg1 withStyle:(long long)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scale:(double)arg4;
- (struct CGSize { double x1; double x2; })_sizeForChargeRingWithStyle:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withPreferredContentSizeCategory:(id)arg3;
- (void)_stopAutomaticallyUpdatingVisualStyling;
- (void)_updateFontForChargeLabelForStyle:(long long)arg1 andContentSizeCategory:(id)arg2;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1;
- (id)_visualStylingProviderForCategory:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)glyph;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCharging;
- (bool)isEmpty;
- (bool)isLowCharge;
- (bool)isLowPowerModeEnabled;
- (void)layoutSubviews;
- (long long)percentCharge;
- (id)requiredVisualStyleCategories;
- (long long)ringItemViewStyle;
- (double)ringLineWidth;
- (double)ringScale;
- (double)scaleFactor;
- (void)setCharging:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setGlyph:(id)arg1;
- (void)setLowCharge:(bool)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setPercentCharge:(long long)arg1;
- (void)setRingItemViewStyle:(long long)arg1;
- (void)setRingLineWidth:(double)arg1;
- (void)setRingScale:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)transitionCoordinator;

@end
