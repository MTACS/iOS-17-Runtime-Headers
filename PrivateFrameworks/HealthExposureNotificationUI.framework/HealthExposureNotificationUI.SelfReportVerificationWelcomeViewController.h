
@interface HealthExposureNotificationUI.SelfReportVerificationWelcomeViewController : UIViewController <UIScrollViewDelegate> {
    void $__lazy_storage_$_authorityTextView;
    void $__lazy_storage_$_contentView;
    void $__lazy_storage_$_footerView;
    void $__lazy_storage_$_titleLabel;
    void flow;
    void healthAgencyModel;
    void regionSupportsSelfReportV1;
    void regionSupportsWebReport;
    void titleLabelTopOffset;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
