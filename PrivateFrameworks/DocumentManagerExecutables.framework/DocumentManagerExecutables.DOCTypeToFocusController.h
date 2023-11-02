
@interface DocumentManagerExecutables.DOCTypeToFocusController : UIResponder <UIKeyInput> {
    void delegate;
    void eventHadModifierKey;
    void typeToFocusInputBuffer;
    void typeToFocusInputView;
    void typeToFocusTimeout;
}

@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) UIView *inputView;

- (void).cxx_destruct;
- (long long)autocorrectionType;
- (void)deleteBackward;
- (bool)hasText;
- (id)init;
- (id)inputAssistantItem;
- (id)inputView;
- (void)insertText:(id)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)typingTimeout;

@end
