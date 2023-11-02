
@interface PKSubcredentialProvisioningController : NSObject <PKAppletSubcredentialPairingSessionDelegate, PKSubcredentialProvisioningOperationDelegate> {
    PKAppletSubcredential * _addedCredential;
    id /* block */  _cancelCompletion;
    PKSubcredentialProvisioningConfiguration * _configuration;
    PKAssertion * _contactlessInterfaceSuppressionAssertion;
    PKSubcredentialProvisioningOperationContext * _context;
    PKSubcredentialProvisioningOperation * _currentOperation;
    long long  _currentState;
    <PKSubcredentialProvisioningControllerDelegate> * _delegate;
    PKAssertion * _fieldDetectSuppressionAssertion;
    bool  _hasBeenCanceled;
    bool  _hasStarted;
    NSObject<OS_dispatch_queue> * _operationSerialQueue;
    PKPaymentPass * _provisionedPass;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    PKSubcredentialProvisioningTransitionTable * _transitionTable;
    PKAssertion * _userNotificationAssertion;
}

@property (nonatomic, readonly) PKAppletSubcredential *addedCredential;
@property (nonatomic, readonly) long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSubcredentialProvisioningControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *provisionedPass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_canBeginProvisioning:(id /* block */)arg1;
- (void)acquireProvisioningAssertionsWithCompletion:(id /* block */)arg1;
- (id)addedCredential;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithError:(id)arg2 brandCode:(unsigned long long)arg3;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;
- (void)cancelProvisioningWithCompletion:(id /* block */)arg1;
- (void)cleanUpProvisioningAfterError:(bool)arg1;
- (long long)currentState;
- (void)declineRelatedInvitationsIfNecessary;
- (id)delegate;
- (void)finishProvisioningWithError:(id)arg1 state:(long long)arg2;
- (id)init;
- (void)operation:(id)arg1 addedCredential:(id)arg2;
- (void)operation:(id)arg1 addedPass:(id)arg2;
- (void)operation:(id)arg1 advanceToState:(long long)arg2;
- (void)operation:(id)arg1 failWithError:(id)arg2;
- (void)operationWasCanceled:(id)arg1;
- (id)provisionedPass;
- (void)releaseProvisioningAssertions;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)startProvisioningWithConfiguration:(id)arg1;
- (void)transitionToState:(long long)arg1 withOperation:(id)arg2 error:(id)arg3;
- (id)webServiceFromConfiguration:(id)arg1;

@end
