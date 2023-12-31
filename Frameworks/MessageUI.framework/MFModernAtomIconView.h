
@interface MFModernAtomIconView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _drawingOffset;
    NSArray * _iconImages;
    double  _iconPadding;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } drawingOffset;
@property (nonatomic, retain) NSArray *iconImages;
@property (nonatomic) double iconPadding;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })drawingOffset;
- (id)iconImages;
- (double)iconPadding;
- (double)preferredWidth;
- (void)setDrawingOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setIconImages:(id)arg1;
- (void)setIconPadding:(double)arg1;

@end
