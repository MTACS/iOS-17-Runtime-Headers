
@interface SXVideoPlayerViewControllerResponse : NSObject {
    SXVideoAnalyticsRouter * _analyticsRouter;
    bool  _expectVideoPlayerViewController;
    bool  _shouldAutoplay;
    SXVideoPlayerVisibilityMonitor * _visibilityMonitor;
}

@property (nonatomic, retain) SXVideoAnalyticsRouter *analyticsRouter;
@property (nonatomic) bool expectVideoPlayerViewController;
@property (nonatomic) bool shouldAutoplay;
@property (nonatomic, retain) SXVideoPlayerVisibilityMonitor *visibilityMonitor;

- (void).cxx_destruct;
- (id)analyticsRouter;
- (bool)expectVideoPlayerViewController;
- (void)setAnalyticsRouter:(id)arg1;
- (void)setExpectVideoPlayerViewController:(bool)arg1;
- (void)setShouldAutoplay:(bool)arg1;
- (void)setVisibilityMonitor:(id)arg1;
- (bool)shouldAutoplay;
- (id)visibilityMonitor;

@end
