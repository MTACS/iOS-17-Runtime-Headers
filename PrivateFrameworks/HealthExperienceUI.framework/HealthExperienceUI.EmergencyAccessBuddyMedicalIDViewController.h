
@interface HealthExperienceUI.EmergencyAccessBuddyMedicalIDViewController : OBTableWelcomeController <HKMedicalIDViewControllerDelegate> {
    void $__lazy_storage_$_tableViewHeightLayoutConstraint;
    void didShowEditMedicalIDOnViewDidAppear;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  emergencyStatus;
    void flow;
    void healthStore;
    void medicalIDCache;
    void medicalIDViewController;
    void tableViewHeight;
}

- (void).cxx_destruct;
- (void)didTapCancel:(id)arg1;
- (void)didTapNext:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidUpdate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
