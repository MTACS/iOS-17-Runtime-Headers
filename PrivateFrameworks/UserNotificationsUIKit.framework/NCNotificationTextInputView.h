
@interface NCNotificationTextInputView : UIView <UIScribbleInteractionDelegate, UITextViewDelegate> {
    NCNotificationAction * _action;
    UIButton * _button;
    <NCNotificationTextInputViewDelegate> * _delegate;
    UIStackView * _horizontalStack;
    UIInputContextHistory * _inputContextHistory;
    UIScribbleInteraction * _scribbleInteraction;
    UITextView * _textView;
}

@property (nonatomic, retain) NCNotificationAction *action;
@property (nonatomic, retain) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationTextInputViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *horizontalStack;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic, retain) UIScribbleInteraction *scribbleInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (double)_maximumTextViewHeight;
- (double)_pencilModeHeight;
- (double)_textViewHeight;
- (double)_textViewWidth;
- (void)_updateForTextChange;
- (id)action;
- (bool)becomeFirstResponder;
- (id)button;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)delegate;
- (id)horizontalStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputContextHistory;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (bool)resignFirstResponder;
- (void)safeAreaInsetsDidChange;
- (id)scribbleInteraction;
- (void)scribbleInteractionDidFinishWriting:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHorizontalStack:(id)arg1;
- (void)setInputContextHistory:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setScribbleInteraction:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)textViewDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
