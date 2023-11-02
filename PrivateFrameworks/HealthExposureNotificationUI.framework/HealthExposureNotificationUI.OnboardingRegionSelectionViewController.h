
@interface HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void flow;
    void regionTableView;
    void regionsProvider;
    void selectionType;
    void statusView;
}

- (void).cxx_destruct;
- (void)didTapCancel;
- (void)didTapDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
