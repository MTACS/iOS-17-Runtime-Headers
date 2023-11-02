
@interface NewsAds.BannerAdMetricsView : UIView <APPCMetricsViewReadyDelegate> {
    void contentInfo;
    void metricsView;
    void onLongPress;
    void placementIdentifier;
    void promotedContentInfoObserver;
    void state;
    void unfilledReasonObserver;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)metricsViewCollapsed:(id)arg1;
- (void)metricsViewReady:(id)arg1;

@end
