
@interface PKPaymentSetupAddToWatchOfferViewController : PKAddToWatchOfferViewController {
    id /* block */  _dismissalHandler;
    UIView * _interactionDisabledView;
}

@property (nonatomic, copy) id /* block */ dismissalHandler;

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 externalProvisioningDeviceSerialNumbers:(id)arg3 completion:(id /* block */)arg4;
+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(long long)arg2 withCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_handleDismissal:(bool)arg1;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch;
- (id /* block */)dismissalHandler;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 dismissalHandler:(id /* block */)arg3;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
