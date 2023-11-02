
@interface HealthExperienceUI.EmergencyAccessBuddyShareMedicalIDViewController : OBWelcomeController {
    void dontShareButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  emergencyStatus;
    void flow;
    void healthStore;
    void medicalIDCache;
    void shareButton;
}

- (void).cxx_destruct;
- (void)didTapCancel:(id)arg1;
- (void)didTapDontShare:(id)arg1;
- (void)didTapLearnMore:(id)arg1;
- (void)didTapShare:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)viewDidLoad;

@end
