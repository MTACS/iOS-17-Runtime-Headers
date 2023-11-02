
@interface AMSUIWebSafariPageModel : AMSUIWebModel <AMSUIWebPageProvider> {
    NSURL * _URL;
    NSString * _backgroundColor;
    NSString * _callbackScheme;
    AMSUIWebClientContext * _context;
    NSDictionary * _data;
    bool  _hideToolBar;
    AMSMetricsEvent * _impressionEvent;
    AMSUIWebLoadingPageModel * _loadingModel;
    AMSUIWebNavigationBarModel * _navigationBar;
    bool  _showShareButton;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) NSString *callbackScheme;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (nonatomic, retain) NSDictionary *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideToolBar;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, retain) AMSUIWebLoadingPageModel *loadingModel;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) bool showShareButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)URL;
- (id)backgroundColor;
- (id)callbackScheme;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)data;
- (id)description;
- (bool)disableReappearPlaceholder;
- (bool)hideToolBar;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)loadingModel;
- (id)navigationBar;
- (void)setCallbackScheme:(id)arg1;
- (void)setData:(id)arg1;
- (void)setHideToolBar:(bool)arg1;
- (void)setLoadingModel:(id)arg1;
- (void)setShowShareButton:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)showShareButton;
- (struct CGSize { double x1; double x2; })windowSize;

@end
