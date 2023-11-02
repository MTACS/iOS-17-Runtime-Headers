
@interface HealthExperienceUI.EmergencyAccessBuddyDoneViewController : OBWelcomeController <CTStewieStateMonitorDelegate> {
    void $__lazy_storage_$_isStewieSupported;
    void $__lazy_storage_$_queue;
    void $__lazy_storage_$_reviewMedicalIDReminderBullet;
    void $__lazy_storage_$_stewieTryOutFootnote;
    void $__lazy_storage_$_stewieTryOutModeBullet;
    void $__lazy_storage_$_stewieTryOutModeView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  emergencyStatus;
    void flow;
    void stewieStateMonitor;
}

- (void).cxx_destruct;
- (void)didTapDone:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (void)stateChanged:(id)arg1;
- (void)viewDidLoad;

@end
