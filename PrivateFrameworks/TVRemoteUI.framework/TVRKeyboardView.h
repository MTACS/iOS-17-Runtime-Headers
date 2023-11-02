
@interface TVRKeyboardView : UIView <RTIInputSystemPayloadDelegate, UITextFieldDelegate> {
    TVRCKeyboardAttributes * _attributes;
    RTIInputSystemSourceSession * _currentSourceSession;
    <TVRKeyboardViewDelegate> * _delegate;
    UIButton * _dictationButton;
    UIVisualEffectView * _effectView;
    UINavigationBar * _navigationBar;
    UIView * _separator;
    _TVRTextField * _textField;
    UIView * _textFieldWrapper;
}

@property (nonatomic, retain) TVRCKeyboardAttributes *attributes;
@property (nonatomic, retain) RTIInputSystemSourceSession *currentSourceSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRKeyboardViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dictationButton;
@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationBar *navigationBar;
@property (nonatomic, retain) UIView *separator;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) _TVRTextField *textField;
@property (nonatomic, retain) UIView *textFieldWrapper;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_cancelButton:(id)arg1;
- (void)_dictationButtonReleased:(id)arg1;
- (void)_dictationButtonTapped:(id)arg1;
- (double)_separatorHeight;
- (void)_textDidChange:(id)arg1;
- (id)attributes;
- (bool)becomeFirstResponder;
- (id)currentSourceSession;
- (id)delegate;
- (id)dictationButton;
- (id)effectView;
- (void)enableDictationButton:(bool)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)navigationBar;
- (bool)resignFirstResponder;
- (id)separator;
- (void)setAttributes:(id)arg1;
- (void)setCurrentSourceSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationButton:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldWrapper:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textField;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textFieldWrapper;
- (id)title;

@end
