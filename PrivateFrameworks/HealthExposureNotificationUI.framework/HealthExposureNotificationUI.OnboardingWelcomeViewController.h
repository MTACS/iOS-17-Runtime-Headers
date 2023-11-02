
@interface HealthExposureNotificationUI.OnboardingWelcomeViewController : UIViewController <UIScrollViewDelegate> {
    void buttonTray;
    void flow;
    void footerLabel;
    void howItWorksButton;
    void isFromAvailabilityAlert;
    void notificationPreview;
    void primaryButton;
    void scrollView;
    void scrollViewContentSizeObserver;
    void secondaryButton;
    void subtitleLabel;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didTapDone;
- (void)didTapFooterLabel;
- (void)didTapHowExposureNotificationsWork;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
