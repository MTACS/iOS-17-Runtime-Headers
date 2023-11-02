
@interface MCTouchInput : MCKeyboardInput {
    double  _radius;
    double  _timestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchPoint;
}

@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } touchPoint;

- (bool)canComposeNew:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 timestamp:(double)arg3;
- (double)radius;
- (id)shortDescriptionWithLeadingString:(id)arg1;
- (double)timestamp;
- (struct CGPoint { double x1; double x2; })touchPoint;

@end
