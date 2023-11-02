
@interface SBSeparatorView : UIView {
    double  _keyboardHeight;
    unsigned long long  _nubStyle;
    SBSeparatorNubView * _nubView;
}

@property (nonatomic) double keyboardHeight;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nubRect;
@property (nonatomic) unsigned long long nubStyle;
@property (nonatomic, retain) SBSeparatorNubView *nubView;

+ (struct CGSize { double x1; double x2; })nubHitTestSize;

- (void).cxx_destruct;
- (void)_updateNubViewFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)keyboardHeight;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nubRect;
- (unsigned long long)nubStyle;
- (id)nubView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setNubStyle:(unsigned long long)arg1;
- (void)setNubView:(id)arg1;

@end
