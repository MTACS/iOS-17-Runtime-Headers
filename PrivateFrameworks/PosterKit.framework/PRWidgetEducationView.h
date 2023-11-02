
@interface PRWidgetEducationView : UIView {
    UIView * _contentView;
    <PRWidgetEducationViewDelegate> * _delegate;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) <PRWidgetEducationViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)contentView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
