
@protocol CRPolyline <NSCopying, NSSecureCoding>

@required

- (void)enumeratePoints:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, struct CGPoint { double x1; double x2; }, bool*, void*
- (struct CGPath { }*)path;
- (unsigned long long)pointCount;
- (NSArray *)pointValues;
- (id)rotated180;
- (id)simplified;

@end
