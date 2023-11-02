
@interface HealthExperienceUI.EmergencyAccessBuddyLockScreenMedicalIDViewController : OBTableWelcomeController {
    void $__lazy_storage_$_tableViewHeightLayoutConstraint;
    void diffableDataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  emergencyStatus;
    void flow;
    void healthStore;
    void initialShowWhenLocked;
    void medicalIDCache;
    void switchCell;
    void tableViewHeight;
}

- (void).cxx_destruct;
- (void)didTapCancel:(id)arg1;
- (void)didTapNext:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
