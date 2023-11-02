
@interface HealthRecordsUI.LabsOnboardingViewController : UIViewController {
    void $__lazy_storage_$_accessoryLabel;
    void $__lazy_storage_$_tipsView;
    void accessoryColor;
    void context;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  headerType;
    void isPresentingInPopover;
    void minimumTappableDismissHeight;
    void minimumTappableDismissWidth;
    void providedHealthStore;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

@end
