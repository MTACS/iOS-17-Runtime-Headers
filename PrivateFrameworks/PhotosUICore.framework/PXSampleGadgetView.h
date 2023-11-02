
@interface PXSampleGadgetView : UICollectionViewCell {
    UIColor * _color;
    UIView * _colorView;
    <PXSampleGadgetViewDelegate> * _delegate;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic) <PXSampleGadgetViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)color;
- (id)colorView;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setColorView:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
