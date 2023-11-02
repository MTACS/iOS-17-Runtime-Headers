
@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider> {
    NSURL * _URL;
    NSString * _backgroundColor;
    NSDictionary * _clientOptions;
    AMSUIWebClientContext * _context;
    NSDictionary * _headers;
    AMSMetricsEvent * _impressionEvent;
    bool  _loadUsingWebKit;
    AMSUIWebNavigationBarModel * _navigationBar;
    AMSUIWebWrapperViewController * _viewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, readonly) NSDictionary *clientOptions;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, readonly) bool loadUsingWebKit;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIWebWrapperViewController *viewController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)URL;
- (id)_webPageViewController;
- (id)backgroundColor;
- (id)clientOptions;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableReappearPlaceholder;
- (id)headers;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (bool)loadUsingWebKit;
- (id)navigationBar;
- (void)setViewController:(id)arg1;
- (id)viewController;
- (struct CGSize { double x1; double x2; })windowSize;

@end
