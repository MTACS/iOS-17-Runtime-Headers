
@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem {
    NSArray * _defaultSystemLeadingBarButtonGroups;
    NSArray * _defaultSystemTrailingBarButtonGroups;
    <UISystemDefaultTextInputAssistantItemDelegate> * _delegate;
    bool  _isKeyboardCameraItem;
    bool  _systemItem;
}

@property (nonatomic, retain) NSArray *defaultSystemLeadingBarButtonGroups;
@property (nonatomic, retain) NSArray *defaultSystemTrailingBarButtonGroups;
@property (nonatomic) <UISystemDefaultTextInputAssistantItemDelegate> *delegate;
@property (nonatomic, readonly) bool isKeyboardCameraItem;
@property (getter=_isSystemItem, nonatomic) bool systemItem;

- (void).cxx_destruct;
- (bool)_isSystemItem;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)arg1;
- (void)_updateIsSystemItem;
- (void)analyticsDispatchWithActionStyle:(long long)arg1;
- (void)assistantBold;
- (void)assistantCopy;
- (void)assistantCut;
- (void)assistantDictation;
- (void)assistantDictationMicOn;
- (void)assistantDismiss;
- (void)assistantEmoji;
- (void)assistantExpand;
- (void)assistantItalic;
- (void)assistantPaste:(id)arg1 forEvent:(id)arg2;
- (void)assistantRedo;
- (void)assistantReturnKey;
- (void)assistantShowKeyboard;
- (void)assistantUnderline;
- (void)assistantUndo;
- (void)assistantWriteboard;
- (bool)canPerformSystemButtonActionForStyle:(long long)arg1;
- (id)defaultSystemLeadingBarButtonGroups;
- (id)defaultSystemTrailingBarButtonGroups;
- (id)delegate;
- (id)init;
- (bool)isKeyboardCameraItem;
- (void)performSystemButtonActionForStyle:(long long)arg1;
- (void)setDefaultSystemLeadingBarButtonGroups:(id)arg1;
- (void)setDefaultSystemTrailingBarButtonGroups:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setSystemItem:(bool)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;

@end
