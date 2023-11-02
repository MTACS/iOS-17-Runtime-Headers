
@interface AMSUIWebCameraReaderPageModel : NSObject <AMSUIWebPageProvider> {
    <AMSUIWebActionRunnable> * _action;
    bool  _allowsCameraToggle;
    bool  _allowsTextEntry;
    NSString * _backgroundColor;
    <AMSUIWebActionRunnable> * _bottomLinkAction;
    NSString * _bottomLinkLabel;
    AMSUIWebClientContext * _context;
    bool  _fullScreen;
    AMSMetricsEvent * _impressionEvent;
    AMSUIWebNavigationBarModel * _navigationBar;
    long long  _pageType;
    UIViewController * _presentedViewController;
    NSString * _primaryLabel;
    NSString * _secondaryLabel;
    NSString * _textFieldPlaceholder;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, retain) <AMSUIWebActionRunnable> *action;
@property (nonatomic) bool allowsCameraToggle;
@property (nonatomic) bool allowsTextEntry;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) <AMSUIWebActionRunnable> *bottomLinkAction;
@property (nonatomic, retain) NSString *bottomLinkLabel;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) long long pageType;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic, retain) NSString *primaryLabel;
@property (nonatomic, retain) NSString *secondaryLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *textFieldPlaceholder;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

- (void).cxx_destruct;
- (id)action;
- (bool)allowsCameraToggle;
- (bool)allowsTextEntry;
- (id)backgroundColor;
- (id)bottomLinkAction;
- (id)bottomLinkLabel;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableReappearPlaceholder;
- (id)impressionEvent;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (bool)isFullScreen;
- (id)loadPage;
- (id)navigationBar;
- (long long)pageType;
- (id)presentedViewController;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setAction:(id)arg1;
- (void)setAllowsCameraToggle:(bool)arg1;
- (void)setAllowsTextEntry:(bool)arg1;
- (void)setBottomLinkAction:(id)arg1;
- (void)setBottomLinkLabel:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setPageType:(long long)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setTextFieldPlaceholder:(id)arg1;
- (id)textFieldPlaceholder;
- (struct CGSize { double x1; double x2; })windowSize;

@end
