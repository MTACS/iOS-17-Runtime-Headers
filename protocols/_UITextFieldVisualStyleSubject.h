
@protocol _UITextFieldVisualStyleSubject <NSObject>

@required

- (UIVisualEffectView *)_contentBackdropView;
- (UIView *)_contentView;
- (UIColor *)_currentTextColor;
- (bool)_fieldEditorAttached;
- (double)_fieldEditorHeight;
- (bool)_hasFloatingFieldEditor;
- (bool)_inVibrantContentView;
- (bool)_isFocused;
- (long long)_keyboardAppearance;
- (bool)_shouldDetermineInterfaceStyleTextColor;
- (bool)_shouldOverrideEditingFont;
- (_UITextFieldCanvasView *)_textCanvasView;
- (bool)_textShouldFillFieldEditorHeight;
- (bool)_textShouldUseVibrancy;
- (long long)_userInterfaceStyle;

@end
