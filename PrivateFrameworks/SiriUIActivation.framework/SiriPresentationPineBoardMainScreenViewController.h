
@interface SiriPresentationPineBoardMainScreenViewController : SiriPresentationViewController {
    double  _buttonDownTimestamp;
    AFClientLite * _clientLite;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dictationInProgressLock;
    bool  _didRequestDictationStart;
    NSObject<OS_dispatch_group> * _requestDictationFromSiriGroup;
    bool  _shouldListenForSceneActivation;
    bool  _shouldRequestDictation;
}

@property (getter=_buttonDownTimestamp, setter=_setButtonDownTimestamp:, nonatomic) double buttonDownTimestamp;
@property (nonatomic, retain) AFClientLite *clientLite;
@property (nonatomic) <SiriPresentationPineBoardMainScreenViewControllerDelegate> *siriPresentationControllerDelegate;

- (void).cxx_destruct;
- (double)_buttonDownTimestamp;
- (void)_forwardHIDButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 type:(long long)arg3 senderID:(unsigned long long)arg4;
- (bool)_getValueForShouldRequestDictation;
- (void)_prewarmFlamesWithPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prewarmSiriVideoFlowDelegatePlugin;
- (void)_setButtonDownTimestamp:(double)arg1;
- (bool)_shouldShowSetupViewController;
- (double)_thresholdForTriggeringABCInLaunch;
- (id)clientLite;
- (id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setClientLite:(id)arg1;
- (void)setNextAssistantRecognitionStrings:(id)arg1;
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;
- (void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriViewController:(id)arg1 didChangePresentationVisualState:(unsigned long long)arg2;
- (void)siriViewController:(id)arg1 didReceiveButtonUpWithRequestOptions:(id)arg2;
- (void)siriViewController:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;
- (id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2;
- (void)siriViewControllerDidChangeToListeningMode:(id)arg1;
- (void)siriViewControllerDidDeactivateScene:(id)arg1;
- (void)siriViewControllerDidPresentKeyboard:(id)arg1;

@end
