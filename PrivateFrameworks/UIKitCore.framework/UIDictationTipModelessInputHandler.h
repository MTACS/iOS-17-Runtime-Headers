
@interface UIDictationTipModelessInputHandler : NSObject {
    <UIDictationTipHandlerDelegate> * _delegate;
    bool  _modelessInputTipDictationStoppedSignal;
    bool  _shouldAttemptToShowModelessTip;
    bool  _softwareKeyboardInteractionAfterDictationStoppedSignal;
}

@property (nonatomic) <UIDictationTipHandlerDelegate> *delegate;
@property (nonatomic) bool modelessInputTipDictationStoppedSignal;
@property (nonatomic) bool shouldAttemptToShowModelessTip;
@property (nonatomic) bool softwareKeyboardInteractionAfterDictationStoppedSignal;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)modelessInputTipDictationStoppedSignal;
- (void)processSoftwareKeyboardInteraction;
- (void)processUserInteractionEnded;
- (void)resetDictationTipModelessHandlerSignalFlags;
- (void)setDelegate:(id)arg1;
- (void)setModelessInputTipDictationStoppedSignal:(bool)arg1;
- (void)setShouldAttemptToShowModelessTip:(bool)arg1;
- (void)setSoftwareKeyboardInteractionAfterDictationStoppedSignal:(bool)arg1;
- (bool)shouldAttemptToShowModelessTip;
- (bool)shouldShowModelessInputTip;
- (void)showModelessInputTip;
- (bool)softwareKeyboardInteractionAfterDictationStoppedSignal;
- (void)triggerAttemptToShowModelessTipFlag;
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;

@end
