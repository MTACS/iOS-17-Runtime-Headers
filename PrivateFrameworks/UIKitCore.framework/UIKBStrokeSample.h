
@interface UIKBStrokeSample : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    double  _timestamp;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) double timestamp;

- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2;
- (struct CGPoint { double x1; double x2; })point;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
