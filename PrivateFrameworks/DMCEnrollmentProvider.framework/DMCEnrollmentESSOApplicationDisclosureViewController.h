
@interface DMCEnrollmentESSOApplicationDisclosureViewController : DMCEnrollmentTemplateTableViewController {
    <DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate> * _delegate;
    NSArray * _requiredEntitlements;
}

@property <DMCEnrollmentESSOApplicationDisclosureViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *requiredEntitlements;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 lockupRequest:(id)arg2 lockupViewGroup:(id)arg3 requiredEntitlements:(id)arg4;
- (void)leftBarButtonTapped:(id)arg1;
- (id)requiredEntitlements;
- (void)setDelegate:(id)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
