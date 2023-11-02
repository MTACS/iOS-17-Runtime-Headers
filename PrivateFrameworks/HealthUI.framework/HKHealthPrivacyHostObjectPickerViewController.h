
@interface HKHealthPrivacyHostObjectPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostObjectPickerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <HKHealthPrivacyServiceRemoteObjectPickerViewController> *_healthPrivacyServiceViewControllerProxy;
@property (nonatomic) <HKHealthPrivacyHostObjectPickerViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPromptSession:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
