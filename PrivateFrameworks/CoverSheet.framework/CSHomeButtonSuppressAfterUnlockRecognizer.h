
@interface CSHomeButtonSuppressAfterUnlockRecognizer : NSObject <SBHomeButtonSuppressAfterUnlockRecognizer> {
    <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> * _delegate;
    bool  _done;
    BSAbsoluteMachTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHomeButtonSuppressAfterUnlockRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)_requestEndOfSuppression;
- (void)_startTimer;
- (void)_timerFired;
- (void)dealloc;
- (id)delegate;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
