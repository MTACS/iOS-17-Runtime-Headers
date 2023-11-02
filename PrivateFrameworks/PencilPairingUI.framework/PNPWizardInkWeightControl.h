
@interface PNPWizardInkWeightControl : UIView <PNPPencilInteractionEventDestination> {
    PNPGradientView * _gradient;
    UIView * _knob;
    double  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (id)_knobColor;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setValue:(double)arg1;
- (double)value;

@end
