
@interface MediaControlsRoutingButtonView : MPButton {
    long long  _currentMode;
    long long  _deviceType;
    CCUICAPackageView * _packageView;
    bool  _userInterfaceStyleSwitchingEnabled;
}

@property (nonatomic) long long currentMode;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) CCUICAPackageView *packageView;
@property (getter=isUserInterfaceStyleSwitchingEnabled, nonatomic) bool userInterfaceStyleSwitchingEnabled;

- (void).cxx_destruct;
- (id)_glyphResource;
- (void)_updateGlyphPackage;
- (void)_updateGlyphState;
- (long long)currentMode;
- (long long)deviceType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUserInterfaceStyleSwitchingEnabled;
- (void)layoutSubviews;
- (id)packageView;
- (void)setAlpha:(double)arg1;
- (void)setCurrentMode:(long long)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPackageView:(id)arg1;
- (void)setUserInterfaceStyleSwitchingEnabled:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
