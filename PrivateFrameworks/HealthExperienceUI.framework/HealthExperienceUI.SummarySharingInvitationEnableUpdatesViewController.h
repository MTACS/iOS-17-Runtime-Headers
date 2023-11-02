
@interface HealthExperienceUI.SummarySharingInvitationEnableUpdatesViewController : HealthExperienceUI.OnboardingViewControllerWithNextButton {
    void $__lazy_storage_$_disableUpdatesButton;
    void healthAppNotificationManager;
    void healthStore;
    void notificationAuthorizationCancellable;
    void notificationAuthorizationStatus;
    void notificationSettingsManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  profileInformation;
    void selectedContactPhotoPublisher;
    void sharingEntryStore;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)arg1;
- (void)disableButtonTapped:(id)arg1;
- (void)fetchNotificationAuthorizationStatus;
- (void)nextButtonTapped:(id)arg1;

@end
