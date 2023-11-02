
@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    <_UIButtonBarAppearanceDelegate> * _appearanceDelegate;
    bool  _lightKeyboard;
    _UIUCBKBSelectionBackground * _selectionBackgroundView;
    UIColor * _tintColor;
}

@property (nonatomic) bool lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (void).cxx_destruct;
- (long long)_securePasteButtonSite;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageSymbolConfiguration;
- (bool)isEqual:(id)arg1;
- (bool)lightKeyboard;
- (struct CGPoint { double x1; double x2; })menuAnchorPoint;
- (void)setLightKeyboard:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (bool)shouldLift;
- (id)tintColor;
- (void)updateButton:(id)arg1 forSelectedState:(bool)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(bool)arg2;

@end
