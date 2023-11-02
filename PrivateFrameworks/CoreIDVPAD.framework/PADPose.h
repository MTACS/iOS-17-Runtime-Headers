
@interface PADPose : NSObject {
    double  _pitch;
    double  _roll;
    double  _yaw;
}

@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) double yaw;

- (double)pitch;
- (double)roll;
- (void)setPitch:(double)arg1;
- (void)setRoll:(double)arg1;
- (void)setYaw:(double)arg1;
- (double)yaw;

@end
