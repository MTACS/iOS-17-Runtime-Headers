
@interface CACGPathCodingSegment : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _points;
    int  _type;
}

+ (bool)supportsSecureCoding;

- (void)addToCGPath:(struct CGPath { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg1;
- (id)initWithCoder:(id)arg1;

@end
