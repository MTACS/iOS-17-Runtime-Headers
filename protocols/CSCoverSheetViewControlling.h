
@protocol CSCoverSheetViewControlling <CSAppearanceProviding, CSBehaviorProviding, CSPresentationProviding, CSEventHandling, CSCoverSheetParticipating, SBFIdleTimerBehaviorProviding>

@required

- (void)conformsToCSCoverSheetViewControlling;
- (long long)presentationAltitude;
- (unsigned int)presentationFrameRateRangeReason;
- (struct CAFrameRateRange { float x1; float x2; float x3; })presentationPreferredFrameRateRange;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationTransition;
- (long long)presentationType;
- (<CSCoverSheetViewPresenting> *)presenter;
- (void)setPresenter:(id <CSCoverSheetViewPresenting>)arg1;

@end
