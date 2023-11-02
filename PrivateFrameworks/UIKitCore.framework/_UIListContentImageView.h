
@interface _UIListContentImageView : UIImageView {
    bool  _hadStroke;
    UIColor * _strokeColor;
    double  _strokeWidth;
}

@property (setter=_setStrokeColor:, nonatomic, retain) UIColor *_strokeColor;
@property (setter=_setStrokeWidth:, nonatomic) double _strokeWidth;

- (void).cxx_destruct;
- (void)_registerTraitChanges;
- (void)_setStrokeColor:(id)arg1;
- (void)_setStrokeWidth:(double)arg1;
- (id)_strokeColor;
- (double)_strokeWidth;
- (void)_updateStroke;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;

@end
