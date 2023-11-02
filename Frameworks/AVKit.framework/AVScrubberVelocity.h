
@interface AVScrubberVelocity : NSObject {
    double  _timestamp;
    double  _velocity;
}

@property double timestamp;
@property double velocity;

- (void)setTimestamp:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)timestamp;
- (double)velocity;

@end
