
@interface PKListTextFieldContentView : UIView <UIContentView, UITextFieldDelegate> {
    PKListTextFieldContentConfiguration * _configuration;
    <PKListTextFieldContentViewDelegate> * _delegate;
    bool  _isTemplateLayout;
    UILabel * _secondaryTextLabel;
    UITextField * _textField;
    UILabel * _textLabel;
}

@property (nonatomic, copy) PKListTextFieldContentConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PKListTextFieldContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyConfiguration:(id)arg1;
- (void)_applyTextProperties:(id)arg1 toLabel:(id)arg2;
- (void)_applyTextProperties:(id)arg1 toTextField:(id)arg2;
- (bool)_keepTextFieldVisible;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_textAlignmentForListAlignment:(long long)arg1;
- (long long)_textAutocapTypeForTextTransform:(long long)arg1;
- (void)_textFieldTextDidChange:(id)arg1;
- (id)_transformedText:(id)arg1 forTransform:(long long)arg2;
- (void)_updateErrorState:(bool)arg1;
- (void)beginEditing;
- (id)configuration;
- (id)delegate;
- (void)endEditing;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)resetTextFieldTextFromLabel;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)textFieldText;

@end
