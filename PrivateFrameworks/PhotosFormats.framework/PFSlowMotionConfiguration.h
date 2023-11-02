
@interface PFSlowMotionConfiguration : NSObject {
    PFSlowMotionRampConfiguration * _rampDown;
    PFSlowMotionRampConfiguration * _rampUp;
    float  _volumeDuringRampToSlowMotion;
    float  _volumeDuringSlowMotion;
}

@property (nonatomic, readonly, retain) PFSlowMotionRampConfiguration *rampDown;
@property (nonatomic, readonly, retain) PFSlowMotionRampConfiguration *rampUp;
@property (nonatomic, readonly) float volumeDuringRampToSlowMotion;
@property (nonatomic, readonly) float volumeDuringSlowMotion;

- (void).cxx_destruct;
- (id)init;
- (id)rampDown;
- (id)rampUp;
- (float)volumeDuringRampToSlowMotion;
- (float)volumeDuringSlowMotion;

@end
