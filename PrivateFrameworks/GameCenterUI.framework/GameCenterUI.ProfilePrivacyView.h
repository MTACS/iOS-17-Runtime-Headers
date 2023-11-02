
@interface GameCenterUI.ProfilePrivacyView : GameCenterUI.OnboardingTemplateView <UITableViewDataSource, UITableViewDelegate> {
    void $__lazy_storage_$_tableData;
    void $__lazy_storage_$_tableHeightAnchor;
    void delegate;
    void iconImage;
    void isUnderage;
    void primaryTrayButton;
    void selectedPrivacyChoiceIndex;
    void tableView;
    void tableViewHeight;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)primaryAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

@end
