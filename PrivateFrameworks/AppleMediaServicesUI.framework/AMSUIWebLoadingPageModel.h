
@interface AMSUIWebLoadingPageModel : NSObject <AMSUIWebPageProvider> {
    bool  _animateFadeIn;
    NSString * _backgroundColor;
    AMSUIWebClientContext * _context;
    bool  _disableDelay;
    AMSMetricsEvent * _impressionEvent;
    NSString * _message;
    AMSUIWebNavigationBarModel * _navigationBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic) bool animateFadeIn;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableDelay;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (bool)animateFadeIn;
- (id)backgroundColor;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableDelay;
- (bool)disableReappearPlaceholder;
- (id)impressionEvent;
- (id)initWithContext:(id)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)message;
- (id)navigationBar;
- (void)setAnimateFadeIn:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDisableDelay:(bool)arg1;
- (void)setMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end
