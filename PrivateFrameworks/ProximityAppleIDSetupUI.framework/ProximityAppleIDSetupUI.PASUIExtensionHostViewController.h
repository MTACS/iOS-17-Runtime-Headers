
@interface ProximityAppleIDSetupUI.PASUIExtensionHostViewController : UIViewController <ProximityAppleIDSetupUI.PASUIExtensionHost, _EXHostViewControllerDelegate> {
    void $__lazy_storage_$_exHostViewController;
    void $__lazy_storage_$_sceneProxy;
    void delegate;
    void finished;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    void sceneID;
}

- (void).cxx_destruct;
- (void)extensionDidFinishWith:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
