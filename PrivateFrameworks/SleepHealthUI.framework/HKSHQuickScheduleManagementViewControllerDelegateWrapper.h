
@interface HKSHQuickScheduleManagementViewControllerDelegateWrapper : NSObject <HKSHQuickScheduleManagementViewControllerDelegateInternal> {
    HKSHQuickScheduleManagementViewController * _viewController;
    <HKSHQuickScheduleManagementViewControllerDelegate> * _wrappedDelegate;
}

@property (nonatomic) HKSHQuickScheduleManagementViewController *viewController;
@property (nonatomic) <HKSHQuickScheduleManagementViewControllerDelegate> *wrappedDelegate;

- (void).cxx_destruct;
- (void)quickScheduleManagementViewController:(id)arg1 didSave:(id)arg2;
- (void)quickScheduleManagementViewController:(id)arg1 shouldPresent:(id)arg2;
- (void)quickScheduleManagementViewControllerDidCancel:(id)arg1;
- (void)quickScheduleManagementViewControllerWillSave:(id)arg1;
- (void)setViewController:(id)arg1;
- (void)setWrappedDelegate:(id)arg1;
- (id)viewController;
- (id)wrappedDelegate;

@end
