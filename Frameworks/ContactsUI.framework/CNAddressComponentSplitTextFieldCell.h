
@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell <NUIContainerViewDelegate> {
    CNRepeatingGradientSeparatorView * _separator;
    UITextField * _textFieldLeft;
    UITextField * _textFieldRight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNRepeatingGradientSeparatorView *separator;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textFieldLeft;
@property (nonatomic, retain) UITextField *textFieldRight;

+ (id)cellIdentifier;
+ (Class)containerViewClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)newSeparatorView;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextFieldLeft:(id)arg1;
- (void)setTextFieldRight:(id)arg1;
- (void)setupTextFields;
- (id)textAttributes;
- (id)textFieldLeft;
- (id)textFieldRight;
- (id)textFields;

@end
