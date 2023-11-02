
@interface HKSHQuickScheduleManagementViewController : UIViewController {
    HKSHQuickScheduleManagementViewControllerDelegateWrapper * _delegateWrapper;
    HKSHQuickScheduleManagementViewControllerInternal * _internalViewController;
}

@property (nonatomic) <HKSHQuickScheduleManagementViewControllerDelegate> *sleepDelegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithSleepStore:(id)arg1;
- (void)setSleepDelegate:(id)arg1;
- (id)sleepDelegate;
- (void)viewDidLoad;

@end
