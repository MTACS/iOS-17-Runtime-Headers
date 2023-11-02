
@interface PKRemotePerformActionSetupViewController : _UIRemoteViewController <PKRemotePerformActionSetupViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void)didCancelAction;
- (void)didPerformAction;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
