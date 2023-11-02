
@interface CFXFeedbackController : NSObject {
    NSMutableSet * __activePairedFeedbackGenerators;
    _UIButtonFeedbackGenerator * __shutterButtonLatchingOffFeedbackGenerator;
    _UIButtonFeedbackGenerator * __shutterButtonLatchingOnFeedbackGenerator;
    _UIButtonFeedbackGenerator * __shutterButtonMomentaryFeedbackGenerator;
    unsigned long long  _feedbackToPerform;
    CUShutterButton * _shutterButton;
}

@property (nonatomic, readonly) NSMutableSet *_activePairedFeedbackGenerators;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;
@property (nonatomic) unsigned long long feedbackToPerform;
@property (nonatomic, readonly) CUShutterButton *shutterButton;

- (void).cxx_destruct;
- (id)_activePairedFeedbackGenerators;
- (id)_debugStringForPairedFeedback:(unsigned long long)arg1;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1;
- (id)_shutterButtonLatchingOffFeedbackGenerator;
- (id)_shutterButtonLatchingOnFeedbackGenerator;
- (id)_shutterButtonMomentaryFeedbackGenerator;
- (unsigned long long)feedbackToPerform;
- (id)init;
- (id)initWithShutterButton:(id)arg1;
- (void)performPressButtonFeedback:(unsigned long long)arg1;
- (void)performReleaseButtonFeedback:(unsigned long long)arg1;
- (void)prepareButtonFeedback:(unsigned long long)arg1;
- (void)setFeedbackToPerform:(unsigned long long)arg1;
- (id)shutterButton;
- (void)shutterButtonDown:(id)arg1;
- (unsigned long long)shutterButtonFeedbackForCurrentConfiguration;
- (void)shutterButtonUp:(id)arg1;

@end
