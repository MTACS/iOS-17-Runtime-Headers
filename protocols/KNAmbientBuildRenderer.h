
@protocol KNAmbientBuildRenderer <NSObject>

@required

- (KNBuildRenderer *)buildInRenderer;
- (bool)hasAmbientBuildStarted;
- (void)interruptAndReset;
- (void)registerForAmbientBuildStartCallback:(SEL)arg1 target:(id)arg2;
- (void)setBuildInRenderer:(KNBuildRenderer *)arg1;
- (bool)shouldActionBuildsStopAnimations;

@end
