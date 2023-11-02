
@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_defaultEditingFont;
- (id)_defaultTextColorBlackKeyboard;
- (id)_defaultTextColorDarkKeyboard;
- (id)_defaultTextColorForUserInterfaceStyle;
- (id)_defaultTextColorLightKeyboard;
- (id)_placeholderTextColorBlackKeyboard;
- (id)_placeholderTextColorDarkKeyboard;
- (id)_placeholderTextColorFocused;
- (id)_placeholderTextColorLightKeyboard;
- (id)defaultFocusedTextColor;
- (id)defaultTextColor;
- (id)defaultTextColorForKeyboardAppearance;
- (id)editingProcessorOverridingEditingAttributes:(id)arg1;
- (void)handleTextVibrancy;
- (id)parentViewForTextContentView;
- (id)placeholderColor;
- (bool)textShouldUseVibrancy;

@end
