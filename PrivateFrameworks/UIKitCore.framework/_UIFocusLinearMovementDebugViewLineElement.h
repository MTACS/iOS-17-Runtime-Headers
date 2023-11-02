
@interface _UIFocusLinearMovementDebugViewLineElement : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _cp1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cp2;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    int  _type;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } cp1;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } cp2;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic, readonly) int type;

+ (id)elementWithCGPathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg1;

- (struct CGPoint { double x1; double x2; })cp1;
- (struct CGPoint { double x1; double x2; })cp2;
- (id)initWithType:(int)arg1 point:(struct CGPoint { double x1; double x2; })arg2 cp1:(struct CGPoint { double x1; double x2; })arg3 cp2:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })point;
- (int)type;

@end
