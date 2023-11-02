
@interface iCloudQuotaUI.RemoteExtensionHostViewController : UIViewController <_EXHostViewControllerDelegate> {
    void $__lazy_storage_$_hostViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  appExtension;
    void host;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;

@end
