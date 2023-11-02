
@interface AMSPageRenderMetricsPresenter : NSObject {
    <AMSBagProtocol> * _bag;
    AMSMetrics * _metrics;
    AMSPageRenderMetricsEvent * _pageRenderEvent;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSMetrics *metrics;
@property (nonatomic, retain) AMSPageRenderMetricsEvent *pageRenderEvent;

- (void).cxx_destruct;
- (id)bag;
- (void)endWithActivity:(long long)arg1 pageMetrics:(id)arg2;
- (void)enqueueEvent;
- (id)initWithBag:(id)arg1 metrics:(id)arg2;
- (id)metrics;
- (id)pageRenderEvent;
- (void)setBag:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setPageRenderEvent:(id)arg1;
- (void)startWithActivity:(long long)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;

@end
