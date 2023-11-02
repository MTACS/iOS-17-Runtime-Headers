
@interface ContactlessReaderUI.PINViewModel : _TtCs12_SwiftObject <ProximityReader.PINUI> {
    void $__lazy_storage_$_fineRotationManager;
    void $__lazy_storage_$_pinKeyboardConfig;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _cancelUnlockInstruction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _disableAXButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _incomingCall;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _inhibitsGestures;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinEntryMode;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinLength;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinUIError;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pinUIIsPresented;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _presentAuth;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _readingVOInstructions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showLockOnStatusBar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showProgress;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _topBarModel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _voiceOverEnabled;
    void accessibilityEntryType;
    void audioManager;
    void audioMode;
    void context;
    void didMerchantAuthorize;
    void drawNumberAllowed;
    void drawNumberFailures;
    void drawNumberRecognizer;
    void evaluating;
    void incomingCallAccepted;
    void inhibitsVocalMessages;
    void instructionsTimer;
    void isPINPrivacyLockEnabled;
    void pinCaptureState;
    void pinCardRequest;
    void pinContext;
    void pinController;
    void pinData;
    void pinEntryTimer;
    void remoteProxy;
    void removeDigitTimer;
    void removeDigitsCounter;
    void samSession;
    void subscribers;
    void swipeInstructionsPlayed;
    void tapCounterTimer;
    void tapDigitCounter;
    void voiceOverObserver;
    void voiceOverWasEnabled;
}

- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)errorInDaemonWithError:(long long)arg1;
- (void)notifyIncomingCall;
- (void)updateSessionEventWithSessionEvent:(long long)arg1;

@end
