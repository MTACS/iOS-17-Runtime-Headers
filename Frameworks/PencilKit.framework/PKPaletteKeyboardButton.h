
@interface PKPaletteKeyboardButton : PKPaletteButton {
    bool  _enableKeyboardToggle;
    long long  _floatingKeyboardType;
    UIImage * _indicatorImage;
    UIMenu * _keyboardSelectionMenu;
    PKTextInputLanguageSelectionToken * _observerToken;
}

@property (nonatomic) bool enableKeyboardToggle;
@property (nonatomic) long long floatingKeyboardType;
@property (nonatomic, retain) UIMenu *keyboardSelectionMenu;

- (void).cxx_destruct;
- (void)_updateButtonImage;
- (void)_updateKeyboardToggleState;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dealloc;
- (bool)enableKeyboardToggle;
- (long long)floatingKeyboardType;
- (id)initWithImage:(id)arg1;
- (id)keyboardSelectionMenu;
- (void)setEnableKeyboardToggle:(bool)arg1;
- (void)setFloatingKeyboardType:(long long)arg1;
- (void)setKeyboardSelectionMenu:(id)arg1;

@end
