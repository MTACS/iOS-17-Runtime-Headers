
@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry> {
    bool  _clearsZeroWhenTyping;
    UIFont * _emojiOverrideFont;
}

@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic) bool clearsZeroWhenTyping;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSlotTemplateTypingTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *emojiOverrideFont;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (bool)clearsZeroWhenTyping;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)deleteBackward;
- (id)emojiOverrideFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)insertText:(id)arg1;
- (void)paste:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (void)setClearsZeroWhenTyping:(bool)arg1;
- (void)setEmojiOverrideFont:(id)arg1;
- (void)wf_applyEmojiOverrideFont;
- (void)wf_replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedText:(id)arg2;

@end
