
@interface MagnifierSupport.RecordButton : UIButton {
    void $__lazy_storage_$_circleBezierPath;
    void $__lazy_storage_$_squareBezierPath;
    void _animationDuration;
    void _buttonInnerLayer;
    void _centerShapeFillColor;
    void _outerLineWidth;
    void isRecording;
}

@property (nonatomic) bool enabled;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;

@end
