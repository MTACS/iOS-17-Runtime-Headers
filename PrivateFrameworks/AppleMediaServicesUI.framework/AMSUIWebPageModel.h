
@interface AMSUIWebPageModel : NSObject <AMSUIWebPageProvider> {
    NSString * _backgroundColor;
    AMSUIWebClientContext * _context;
    bool  _ignoreBottomSafeArea;
    bool  _ignoreTopSafeArea;
    AMSMetricsEvent * _impressionEvent;
    AMSUIWebNavigationBarModel * _navigationBar;
    AMSUIWebToolbarModel * _toolbar;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreBottomSafeArea;
@property (nonatomic) bool ignoreTopSafeArea;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIWebToolbarModel *toolbar;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableReappearPlaceholder;
- (bool)ignoreBottomSafeArea;
- (bool)ignoreTopSafeArea;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)navigationBar;
- (void)setContext:(id)arg1;
- (void)setIgnoreBottomSafeArea:(bool)arg1;
- (void)setIgnoreTopSafeArea:(bool)arg1;
- (void)setToolbar:(id)arg1;
- (id)toolbar;
- (struct CGSize { double x1; double x2; })windowSize;

@end
