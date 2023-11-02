
@interface PKNumberPadInputView : UIInputView {
    unsigned char  _batchedUpdateCount;
    NSMutableArray * _buttons;
    <PKNumberPadInputViewDelegate> * _delegate;
    NSNumberFormatter * _formatter;
    bool  _needsReload;
    bool  _needsUpdate;
    UIColor * _numberPadColor;
    bool  _showsDecimalPointButton;
    UIColor * _textColor;
    UIStackView * _verticalStackView;
}

@property (nonatomic, copy) UIColor *numberPadColor;
@property (nonatomic) bool showsDecimalPointButton;
@property (nonatomic, copy) UIColor *textColor;

+ (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)_createBorderedButtonForButtonValue:(unsigned long long)arg1 withBorder:(unsigned long long)arg2 primaryAction:(id)arg3;
- (void)_numericKeyPressed:(unsigned long long)arg1;
- (void)_reloadSubviews;
- (void)_updateButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2 configurator:(id /* block */)arg3;
- (void)layoutSubviews;
- (id)numberPadColor;
- (void)performBatchUpdates:(id /* block */)arg1;
- (void)setNumberPadColor:(id)arg1;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (bool)showsDecimalPointButton;
- (id)textColor;

@end
