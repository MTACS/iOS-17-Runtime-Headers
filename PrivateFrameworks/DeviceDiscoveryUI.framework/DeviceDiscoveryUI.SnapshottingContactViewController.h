
@interface DeviceDiscoveryUI.SnapshottingContactViewController : UIViewController <CNContactViewControllerDelegate> {
    void $__lazy_storage_$_viewController;
    void contact;
    void dismiss;
    void phase;
    void snapshotView;
}

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (void)didTapDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
