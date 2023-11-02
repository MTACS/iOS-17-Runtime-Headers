
@protocol MFTransitionInformationProviding

@required

- (<MFCrossFadeParameters> *)crossFadeParameters;
- (<MFGaplessParameters> *)gaplessParameters;
- (bool)shouldPerformCrossFadeTransitionWith:(id <MFQueuePlayerItem>)arg1;
- (bool)shouldPerformGaplessTransitionWith:(id <MFQueuePlayerItem>)arg1;

@end
