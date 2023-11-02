
@interface _PKStrokeClipPlane : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _normal;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normal;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithOrigin:(struct CGPoint { double x1; double x2; })arg1 normal:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClipPlane:(id)arg1;
- (struct CGPoint { double x1; double x2; })normal;
- (struct CGPoint { double x1; double x2; })origin;

@end
