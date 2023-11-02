
@interface SBSystemActionTrackPreviewsCoachingPolicySettings : PTSettings {
    unsigned long long  _presentationThresholdForActionsWithStatefulPreviews;
    unsigned long long  _presentationThresholdForActionsWithStatelessPreviews;
}

@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatefulPreviews;
@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatelessPreviews;

+ (id)settingsControllerModule;

- (unsigned long long)presentationThresholdForActionsWithStatefulPreviews;
- (unsigned long long)presentationThresholdForActionsWithStatelessPreviews;
- (void)setDefaultValues;
- (void)setPresentationThresholdForActionsWithStatefulPreviews:(unsigned long long)arg1;
- (void)setPresentationThresholdForActionsWithStatelessPreviews:(unsigned long long)arg1;

@end
