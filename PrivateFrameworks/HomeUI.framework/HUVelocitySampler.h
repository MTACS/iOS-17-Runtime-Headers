
@interface HUVelocitySampler : NSObject {
    HUVelocitySample * _currentSample;
    HUVelocitySample * _previousSample;
}

@property (nonatomic, retain) HUVelocitySample *currentSample;
@property (nonatomic, retain) HUVelocitySample *previousSample;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } velocity;

- (void).cxx_destruct;
- (void)addTouchSample:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentSample;
- (id)previousSample;
- (void)reset;
- (void)setCurrentSample:(id)arg1;
- (void)setPreviousSample:(id)arg1;
- (struct CGVector { double x1; double x2; })velocity;

@end
