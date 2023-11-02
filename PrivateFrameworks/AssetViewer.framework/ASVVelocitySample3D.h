
@interface ASVVelocitySample3D : NSObject {
    double  _deltaTime;
    void _end;
    void _start;
}

@property double deltaTime;
@property void end;
@property void start;

- (void)calcFinalVelocityFromPreviousSample:(id)arg1;
- (double)deltaTime;
- (void)end;
- (id)initWithStart:(void *)arg1 end:(void *)arg2 deltaTime:(void *)arg3; // needs 3 arg types, found 1: double
- (void)setDeltaTime:(double)arg1;
- (void)setEnd;
- (void)setStart;
- (void)start;
- (void)velocity;

@end
