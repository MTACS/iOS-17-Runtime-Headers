
@interface CKRemotePeoplePickerViewController : _EXExtensionViewController <CPPeoplePickerXPCHost> {
    void $__lazy_storage_$_contentViewController;
    void connection;
}

- (void).cxx_destruct;
- (void)dismissViewControllerWithSuccess:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)requestActivity:(id /* block */)arg1;
- (bool)shouldAcceptXPCConnection:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
