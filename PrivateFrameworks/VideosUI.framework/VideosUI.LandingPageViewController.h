
@interface VideosUI.LandingPageViewController : VideosUI.VUIViewController {
    void activeServiceRequest;
    void collectionImpressioner;
    void delegate;
    void document;
    void landingPagePerformanceReporter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void notificationCenter;
    void pageMetrics;
    void refreshTTL;
    void stackViewController;
}

- (void).cxx_destruct;
- (void)handleAppWillEnterForeground:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;
- (void)vui_willMoveToParentViewController:(id)arg1;

@end
