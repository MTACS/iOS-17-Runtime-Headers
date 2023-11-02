
@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView {
    UIImageView * _forwardChevronView;
    HKSelectedRangeLabel * _keyLabel;
    long long  _orientation;
    id /* block */  _tapOutBlock;
    UITapGestureRecognizer * _tapOutRecognizer;
    HKSelectedRangeLabel * _valueLabel;
}

@property (nonatomic, retain) UIImageView *forwardChevronView;
@property (nonatomic, readonly) HKSelectedRangeLabel *keyLabel;
@property (nonatomic) long long orientation;
@property (nonatomic, copy) id /* block */ tapOutBlock;
@property (nonatomic, retain) UITapGestureRecognizer *tapOutRecognizer;
@property (nonatomic, readonly) HKSelectedRangeLabel *valueLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_compressedKeySize;
- (struct CGSize { double x1; double x2; })_horizontalIntrinsicContentSize;
- (void)_installForwardChevronView;
- (void)_layoutSubviewsHorizontally;
- (void)_layoutSubviewsVertically;
- (void)_removeForwardChevronView;
- (struct CGSize { double x1; double x2; })_verticalInstrinsicContentSize;
- (id)forwardChevronView;
- (void)handleTapOutGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)keyLabel;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setForwardChevronView:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setTapOutBlock:(id /* block */)arg1;
- (void)setTapOutRecognizer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id /* block */)tapOutBlock;
- (id)tapOutRecognizer;
- (id)valueLabel;

@end
