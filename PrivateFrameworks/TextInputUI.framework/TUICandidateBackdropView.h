
@interface TUICandidateBackdropView : UIView {
    UIKBBackdropView * _backdropView;
    <TUICandidateViewStyle> * _style;
}

@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;

- (void).cxx_destruct;
- (id)backdropView;
- (long long)backdropViewStyle;
- (void)commonInit;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackdropView:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
