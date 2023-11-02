
@interface UIStatusBar_Modern : UIStatusBar_Base {
    _UIStatusBar * _statusBar;
}

@property (nonatomic, retain) _UIStatusBar *statusBar;

+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(unsigned long long)arg2 activeStyleOverride:(unsigned long long*)arg3;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(bool)arg3 inWindow:(id)arg4 isAzulBLinked:(bool)arg5;
+ (Class)_implementationClass;
+ (void)registerSensorActivityIndicator:(id)arg1 forScreen:(id)arg2;
+ (id)sensorActivityIndicator;
+ (id)sensorActivityIndicatorForScreen:(id)arg1;
+ (void)setSensorActivityIndicator:(id)arg1;

- (void).cxx_destruct;
- (id)_dataFromLegacyData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg1;
- (id)_effectiveDataFromData:(id)arg1 activeOverride:(unsigned long long)arg2 canUpdateBackgroundActivity:(bool)arg3;
- (long long)_effectiveStyleFromStyle:(long long)arg1;
- (unsigned long long)_implicitStyleOverrideForStyle:(long long)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 showForegroundView:(bool)arg2 wantsServer:(bool)arg3 inProcessStateProvider:(id)arg4;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(bool)arg4;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(bool)arg6;
- (void)_updateSemanticContentAttributeFromLegacyData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg1;
- (void)_updateWithData:(id)arg1 force:(bool)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (double)alphaForPartWithIdentifier:(id)arg1;
- (id)clockFont;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (id)disabledPartIdentifiers;
- (id)enabledPartIdentifiers;
- (void)forceUpdate:(bool)arg1;
- (void)forceUpdateData:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPartWithIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)jiggleLockIcon;
- (void)layoutSubviews;
- (struct UIOffset { double x1; double x2; })offsetForPartWithIdentifier:(id)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animationSettings:(id)arg2 options:(unsigned long long)arg3;
- (void)setDisabledPartIdentifiers:(id)arg1;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setMode:(long long)arg1;
- (void)setOffset:(struct UIOffset { double x1; double x2; })arg1 forPartWithIdentifier:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (id)statusBar;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(unsigned long long)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg2 withActions:(int)arg3;

@end
