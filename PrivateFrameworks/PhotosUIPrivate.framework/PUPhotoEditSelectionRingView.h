
@interface PUPhotoEditSelectionRingView : UIView {
    UIColor * _selectionRingColor;
    double  _strokeWidth;
}

@property (nonatomic, retain) UIColor *selectionRingColor;
@property (nonatomic) double strokeWidth;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectionRingColor;
- (void)setSelectionRingColor:(id)arg1;
- (void)setStrokeWidth:(double)arg1;
- (double)strokeWidth;

@end
