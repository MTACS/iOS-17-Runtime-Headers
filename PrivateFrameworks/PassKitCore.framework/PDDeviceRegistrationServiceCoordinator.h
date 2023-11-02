
@interface PDDeviceRegistrationServiceCoordinator : NSObject <PDPaymentWebServiceCoordinatorDelegate> {
    PDPaymentWebServiceCoordinator * _paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator * _peerPaymentWebServiceCoordinator;
    NSMutableArray * _registrationTasks;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator;
@property (nonatomic, readonly) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_createTransactionAndPerformDeviceRegistrationWithRegistrationTask:(id)arg1;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1 context:(id)arg2 error:(id)arg3;
- (void)_handlePaymentWebServiceContextChanged;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 forceRegister:(bool)arg3 completion:(id /* block */)arg4;
- (void)_performDeviceRegistrationWithRegistrationTask:(id)arg1 completion:(id /* block */)arg2;
- (bool)_shouldAttemptPeerPaymentRegistrationForce:(bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (void)notePasscodeChanged;
- (id)paymentWebServiceCoordinator;
- (void)paymentWebServiceCoordinatorWebServiceDidChange:(id)arg1;
- (id)peerPaymentWebServiceCoordinator;
- (void)performDeviceRegistrationForReason:(id)arg1 brokerURL:(id)arg2 action:(long long)arg3 forceApplePayRegister:(bool)arg4 forcePeerPaymentRegister:(bool)arg5 completion:(id /* block */)arg6;

@end
