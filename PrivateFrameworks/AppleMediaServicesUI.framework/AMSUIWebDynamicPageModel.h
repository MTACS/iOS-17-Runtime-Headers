
@interface AMSUIWebDynamicPageModel : NSObject <AMSUIWebPageProvider> {
    NSURL * _URL;
    ACAccount * _account;
    NSString * _backgroundColor;
    NSDictionary * _clientOptions;
    AMSUIWebClientContext * _context;
    AMSMetricsEvent * _impressionEvent;
    NSDictionary * _metricsOverlay;
    AMSUIWebNavigationBarModel * _navigationBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) NSDictionary *clientOptions;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, retain) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)URL;
- (id)account;
- (id)backgroundColor;
- (id)clientOptions;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableReappearPlaceholder;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)metricsOverlay;
- (id)navigationBar;
- (void)setAccount:(id)arg1;
- (void)setClientOptions:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setMetricsOverlay:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end
