
@interface RCPNaturalInputCollectionSelection : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _direction;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _zDirection;
    double  _zPosition;
}

@property (readonly) struct CGPoint { double x1; double x2; } direction;
@property (readonly) struct CGPoint { double x1; double x2; } location;
@property (readonly) double zDirection;
@property (readonly) double zPosition;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct CGPoint { double x1; double x2; })direction;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 zPosition:(double)arg2 direction:(struct CGPoint { double x1; double x2; })arg3 zDirection:(double)arg4;
- (struct CGPoint { double x1; double x2; })location;
- (double)zDirection;
- (double)zPosition;

@end
