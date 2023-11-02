
@interface UIAssistantBarButtonItemProvider : NSObject

+ (bool)_isDictationButtonVisible;
+ (bool)_isDismissButtonVisible;
+ (bool)_isEmojiButtonVisible;
+ (bool)_isInputModeVisible:(id)arg1;
+ (bool)_isKeyboardItemEnabled;
+ (bool)_isMinimizeAssistantBarButtonVisible;
+ (bool)_isScribbleButtonsVisible;
+ (bool)_isShowKeyboardButtonVisible;
+ (id)actionForInputMode:(id)arg1;
+ (id)barButtonItemForAssistantItemStyle:(long long)arg1 target:(id)arg2;
+ (id)barButtonItemForAssistantItemStyle:(long long)arg1 target:(id)arg2 forcePlainButton:(bool)arg3;
+ (id)barButtonItemGroupForTextFormattingWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)compactSystemAssistantItem;
+ (id)configuredSymbolImageWithName:(id)arg1 size:(double)arg2;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)arg1;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)arg1;
+ (id)dictationActionForInputMode:(id)arg1 inCurrentInputMode:(id)arg2;
+ (id)dictationMenu;
+ (void)dismissFloatingKeyboard;
+ (void)dismissFloatingKeyboardFromPencilKitIfNeeded;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)arg1;
+ (id)inputWindowController;
+ (bool)isFloatingKeyboardVisible;
+ (bool)isKeyboardGroupVisible;
+ (id)languageIndicatorImage;
+ (id)languageIndicatorItem:(bool)arg1;
+ (id)languageIndicatorMenu:(bool)arg1;
+ (void)presentFloatingKeyboard;
+ (void)setAssistantBarCompact:(bool)arg1;
+ (void)setScribbleLanguageIdentifier:(id)arg1;
+ (id)systemDefaultAssistantItem;
+ (id)unmodifiableSystemAssistantItem:(long long)arg1;
+ (void)updateFloatingAssistantBarIfNeeded;

@end
