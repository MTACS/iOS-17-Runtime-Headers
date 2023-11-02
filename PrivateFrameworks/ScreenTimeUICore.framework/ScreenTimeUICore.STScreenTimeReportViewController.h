
@interface ScreenTimeUICore.STScreenTimeReportViewController : UIViewController <STScreenTimeReportFiltering> {
    void firstWeekday;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  now;
    void viewModel;
}

- (void).cxx_destruct;
- (void)filterForBundleIdentifier:(id)arg1;
- (void)filterForCategoryIdentifier:(id)arg1;
- (void)filterForDateMode:(long long)arg1 withinDateInterval:(id)arg2;
- (void)filterForUserAltDSID:(id)arg1 deviceIdentifier:(id)arg2;
- (void)filterForWebDomain:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 userAltDSID:(id)arg2 deviceIdentifier:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;

@end
