
@interface PKSubcredentialProvisioningDeviceRegistrationOperation : PKSubcredentialProvisioningOperation {
    bool  _operationCancelled;
    PKPaymentProvisioningController * _provisioningController;
}

- (void).cxx_destruct;
- (bool)canCancelOperation;
- (void)cancelOperation;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)performOperation;

@end
