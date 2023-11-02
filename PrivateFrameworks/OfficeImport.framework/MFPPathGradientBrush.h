
@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor * mCenterColor;
    struct CGPoint { 
        double x; 
        double y; 
    }  mCenterPoint;
    OITSUBezierPath * mPath;
    NSArray * mSurroundColors;
}

- (void).cxx_destruct;
- (void)createShading;
- (id)endColor;
- (void)setCenterColor:(id)arg1;
- (void)setCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPath:(id)arg1;
- (void)setSurroundColors:(id)arg1;
- (id)startColor;

@end
