
@interface TKVibrationRecorderRippleTouchContext : NSObject {
    double  _creationTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;

- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (id)init;
- (struct CGPoint { double x1; double x2; })location;
- (void)reset;
- (double)timeIntervalSinceCreation;

@end
