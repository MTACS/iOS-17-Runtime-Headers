
@interface GQDScalarPath : GQDPath {
    double  mScalar;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    int  mType;
}

- (struct CGPath { }*)createBezierPath;
- (bool)isRect;
- (bool)isRectangular;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (double)scalar;
- (struct CGSize { double x1; double x2; })size;
- (int)type;

@end
