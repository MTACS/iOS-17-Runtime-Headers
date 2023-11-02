
@interface SBWalletPrearmRecognizer : NSObject {
    <SBWalletPrearmRecognizerDelegate> * _delegate;
    bool  _invalidated;
    double  _timeout;
    BSAbsoluteMachTimer * _timer;
}

- (void).cxx_destruct;
- (double)_computeDoubleTapTimeout;
- (void)_invalidate;
- (void)_invalidateForFailureReason:(unsigned long long)arg1;
- (void)_invalidateForSuccess;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)menuButtonDoublePress;
- (void)menuButtonSinglePress;
- (void)startRecognizing;

@end
