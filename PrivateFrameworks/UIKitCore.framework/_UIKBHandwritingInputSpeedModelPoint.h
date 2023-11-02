
@interface _UIKBHandwritingInputSpeedModelPoint : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _timestamp;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) double timestamp;

- (id)description;
- (struct CGPoint { double x1; double x2; })location;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
