
@interface BCUIRowView : UIView <BCUIBatteryDeviceDisplaying, MTVisualStylingRequiring> {
    _UIStaticBatteryView * _batteryView;
    NSMutableDictionary * _categoriesToVisualStylingProvider;
    bool  _charging;
    bool  _empty;
    UIImage * _glyph;
    UIImageView * _glyphImageView;
    bool  _lowCharge;
    bool  _lowPowerModeEnabled;
    NSString * _name;
    UILabel * _nameLabel;
    long long  _percentCharge;
    NSNumberFormatter * _percentChargeFormatter;
    UILabel * _percentChargeLabel;
    double  _scaleFactor;
    UIView * _separator;
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
@property (nonatomic) double scaleFactor;
@property (getter=isSeparatorVisible, nonatomic) bool separatorVisible;
@property (readonly) Class superclass;
@property (nonatomic) <UIViewControllerTransitionCoordinator> *transitionCoordinator;

+ (bool)isAX3PlusLayoutRequiredForContentSizeCategory:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_batteryViewFrameforContentSize:(id)arg1 percentChargeLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1;
- (void)_configureBatteryViewIfNecessary;
- (void)_configureGlyphImageViewIfNecessary;
- (void)_configureNameLabelIfNecessary;
- (void)_configurePercentChargeLabelIfNecessary;
- (void)_configureSeparatorIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_glyphImageViewFrameForContentSizeCategory:(id)arg1;
- (id)_lazyPercentChargeFormatter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nameLabelFrameForContentSize:(id)arg1 percentChargeLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_percentChargeLabelFrameForContentSizeCategory:(id)arg1;
- (id)_percentChargeString:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sepatorFrameForContentSize:(id)arg1;
- (void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1;
- (void)_updateBatteryViewIfNeccessary;
- (void)_updateGlyphImageViewIfNecessary:(id)arg1;
- (void)_updateNameLabelIfNecessary:(id)arg1;
- (void)_updatePercentChargeLabelIfNecessary:(id)arg1;
- (void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1;
- (id)_visualStylingProviderForCategory:(long long)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)glyph;
- (id)init;
- (bool)isCharging;
- (bool)isEmpty;
- (bool)isLowCharge;
- (bool)isLowPowerModeEnabled;
- (bool)isSeparatorVisible;
- (void)layoutSubviews;
- (id)name;
- (long long)percentCharge;
- (id)requiredVisualStyleCategories;
- (double)scaleFactor;
- (void)setCharging:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setGlyph:(id)arg1;
- (void)setLowCharge:(bool)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPercentCharge:(long long)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSeparatorVisible:(bool)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;

@end
