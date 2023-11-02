
@interface HKHealthPrivacyHostRecalibrateEstimatesViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController> *_healthPrivacyServiceViewControllerProxy;
@property (nonatomic) <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
