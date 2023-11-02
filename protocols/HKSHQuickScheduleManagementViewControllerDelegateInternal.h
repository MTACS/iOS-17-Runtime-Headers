
@protocol HKSHQuickScheduleManagementViewControllerDelegateInternal

@required

- (void)quickScheduleManagementViewController:(HKSHQuickScheduleManagementViewControllerInternal *)arg1 didSave:(HKSPSleepSchedule *)arg2;
- (void)quickScheduleManagementViewController:(HKSHQuickScheduleManagementViewControllerInternal *)arg1 shouldPresent:(UIAlertController *)arg2;
- (void)quickScheduleManagementViewControllerDidCancel:(HKSHQuickScheduleManagementViewControllerInternal *)arg1;
- (void)quickScheduleManagementViewControllerWillSave:(HKSHQuickScheduleManagementViewControllerInternal *)arg1;

@end
