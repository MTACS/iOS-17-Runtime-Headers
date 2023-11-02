
@interface SBSystemActionPressWithinTimeIntervalCoachingPolicySettings : PTSettings {
    unsigned long long  _presentationThresholdForActionsWithStatefulPreviews;
    unsigned long long  _presentationThresholdForActionsWithStatelessPreviews;
    double  _timeInterval;
}

@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatefulPreviews;
@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatelessPreviews;
@property (nonatomic) double timeInterval;

+ (id)settingsControllerModule;

- (unsigned long long)presentationThresholdForActionsWithStatefulPreviews;
- (unsigned long long)presentationThresholdForActionsWithStatelessPreviews;
- (void)setDefaultValues;
- (void)setPresentationThresholdForActionsWithStatefulPreviews:(unsigned long long)arg1;
- (void)setPresentationThresholdForActionsWithStatelessPreviews:(unsigned long long)arg1;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;

@end
