
@interface HMIMotionVector : HMFObject {
    Class  _eventClass;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _motion;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (retain) Class eventClass;
@property (readonly) struct CGPoint { double x1; double x2; } midpoint;
@property (readonly) struct CGVector { double x1; double x2; } motion;
@property (readonly) struct CGPoint { double x1; double x2; } origin;
@property (readonly) struct CGPoint { double x1; double x2; } target;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (double)distance;
- (Class)eventClass;
- (id)initWithOrigin:(struct CGPoint { double x1; double x2; })arg1 motion:(struct CGVector { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })midpoint;
- (struct CGVector { double x1; double x2; })motion;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setEventClass:(Class)arg1;
- (struct CGPoint { double x1; double x2; })target;

@end
