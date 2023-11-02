
@interface SBUIPopoverExtensionHostViewController : _UIRemoteViewController <_SBUIPopoverExtensionHostInterface> {
    <_SBUIPopoverExtensionHostDelegate> * _delegate;
}

@property (nonatomic) <_SBUIPopoverExtensionHostDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (bool)_canShowWhileLocked;
- (void)_extensionRequestsDismiss;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
