
@interface CAMFeedbackController : NSObject {
    NSMutableSet * __activePairedFeedbackGenerators;
    UISelectionFeedbackGenerator * __burstCountFeedbackGenerator;
    UISelectionFeedbackGenerator * __modeSelectionFeedbackGenerator;
    _UIButtonFeedbackGenerator * __shutterButtonLatchingOffFeedbackGenerator;
    _UIButtonFeedbackGenerator * __shutterButtonLatchingOnFeedbackGenerator;
    _UIButtonFeedbackGenerator * __shutterButtonMomentaryFeedbackGenerator;
}

@property (nonatomic, readonly) NSMutableSet *_activePairedFeedbackGenerators;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_burstCountFeedbackGenerator;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_modeSelectionFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator;
@property (nonatomic, readonly) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator;

- (void).cxx_destruct;
- (id)_activePairedFeedbackGenerators;
- (id)_burstCountFeedbackGenerator;
- (id)_debugStringForPairedFeedback:(unsigned long long)arg1;
- (id)_feedbackGeneratorForDiscreteFeedback:(unsigned long long)arg1;
- (id)_feedbackGeneratorForPairedFeedback:(unsigned long long)arg1;
- (id)_modeSelectionFeedbackGenerator;
- (id)_shutterButtonLatchingOffFeedbackGenerator;
- (id)_shutterButtonLatchingOnFeedbackGenerator;
- (id)_shutterButtonMomentaryFeedbackGenerator;
- (id)init;
- (void)performDiscreteFeedback:(unsigned long long)arg1;
- (void)performPressButtonFeedback:(unsigned long long)arg1;
- (void)performReleaseButtonFeedback:(unsigned long long)arg1;
- (void)prepareButtonFeedback:(unsigned long long)arg1;
- (void)prepareDiscreteFeedback:(unsigned long long)arg1;

@end
