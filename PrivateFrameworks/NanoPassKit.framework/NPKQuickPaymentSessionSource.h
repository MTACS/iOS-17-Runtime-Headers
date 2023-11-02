
@interface NPKQuickPaymentSessionSource : NSObject {
    NPKButtonListener * _buttonListener;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _deferAuthorization;
    <NPKQuickPaymentSessionSourceDelegate> * _delegate;
    bool  _delegateHandlingButtonEvents;
    PKPass * _initialPass;
    NPKQuickPaymentSessionLocalAuthenticationCoordinator * _localAuthenticationCoordinator;
    unsigned long long  _preconditionState;
    bool  _requireFirstInQueue;
    NSObject<OS_dispatch_queue> * _sessionSourceQueue;
    NSDictionary * _vasPasses;
}

- (void).cxx_destruct;
- (void)_handlePMUButtonEvent;
- (void)_performDelegateCallback:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 buttonListener:(id)arg2 callbackQueue:(id)arg3;
- (void)setDeferAuthorization:(bool)arg1;
- (void)setDelegateHandlingButtonEvents:(bool)arg1;
- (void)setInitialPass:(id)arg1;
- (void)setLocalAuthenticationCoordinator:(id)arg1;
- (void)setPreconditionState:(unsigned long long)arg1;
- (void)setRequireFirstInQueue:(bool)arg1;
- (void)setVasPasses:(id)arg1;

@end
