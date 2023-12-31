
@interface GQDCallout2Path : GQDPath {
    double  mCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    bool  mTailAtCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailPosition;
    double  mTailSize;
}

- (double)cornerRadius;
- (struct CGPath { }*)createBezierPath;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (struct CGSize { double x1; double x2; })size;
- (bool)tailAtCenter;
- (struct CGPoint { double x1; double x2; })tailCenter;
- (struct CGPoint { double x1; double x2; })tailPosition;
- (double)tailSize;

@end
