
@interface _UNNotificationContentExtensionHostViewController : _UIRemoteViewController {
    NSExtension * _extension;
    <NSCopying> * _extensionRequestIdentifier;
    NSString * _notificationRequestIdentifier;
}

@property (nonatomic) NSExtension *extension;
@property (nonatomic, copy) <NSCopying> *extensionRequestIdentifier;
@property (nonatomic, copy) NSString *notificationRequestIdentifier;

- (void).cxx_destruct;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (bool)_canShowWhileLocked;
- (id)description;
- (id)extension;
- (id)extensionRequestIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)notificationRequestIdentifier;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setNotificationRequestIdentifier:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
