
@interface PRDevicePoseValidator : NSObject {
    NSObject<OS_os_log> * _logger;
    double  _maximumSpeed;
    PRPose * _previousPose;
}

@property (nonatomic) double maximumSpeed;
@property (nonatomic, retain) PRPose *previousPose;

- (void).cxx_destruct;
- (id)initWithMaximumSpeed:(double)arg1;
- (double)maximumSpeed;
- (id)previousPose;
- (void)setMaximumSpeed:(double)arg1;
- (void)setPreviousPose:(id)arg1;
- (bool)validatePose:(id)arg1;

@end
