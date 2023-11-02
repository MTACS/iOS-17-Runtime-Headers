
@interface PKRemotePaymentSetupViewController : _UIRemoteViewController <PKRemotePaymentSetupViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void)didFinishWithPasses:(id)arg1 error:(id)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
