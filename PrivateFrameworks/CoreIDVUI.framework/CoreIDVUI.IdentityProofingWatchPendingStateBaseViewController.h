
@interface CoreIDVUI.IdentityProofingWatchPendingStateBaseViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void config;
    void imageView;
    void primaryLabel;
    void primaryStackView;
    void tableView;
    void titleLabel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateUI:(id)arg1 previousTraitCollection:(id)arg2;
- (void)viewDidLayoutSubviews;

@end
