
@interface SleepHealthUI.SleepOnboardingFlowTableViewController : SleepHealthUI.SleepTableWelcomeController <UITableViewDelegate> {
    void dataSource;
    void dataSourceAdaptor;
    void delegate;
    void subscriptions;
    void userInfo;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;

@end
