
@protocol AFAudioPowerProviding <NSObject>

@required

- (void)didEndAccessPower;
- (bool)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2;
- (void)willBeginAccessPower;

@end