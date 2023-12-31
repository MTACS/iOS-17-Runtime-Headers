
@interface GQDConnectionPath : GQDPath {
    struct CGPoint { 
        double x; 
        double y; 
    }  mPoint;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
}

- (struct CGPath { }*)createBezierPath;
- (struct CGPoint { double x1; double x2; })point;
- (struct CGSize { double x1; double x2; })size;

@end
