
@interface AMSUIWebErrorPageModel : NSObject <AMSUIWebPageProvider> {
    <AMSUIWebActionRunnable> * _action;
    id /* block */  _actionBlock;
    NSString * _actionButtonTitle;
    NSString * _backgroundColor;
    NSBundle * _bundle;
    AMSUIWebClientContext * _context;
    NSError * _error;
    NSString * _errorMessage;
    bool  _errorMessageInternalOnly;
    NSString * _errorTitle;
    AMSMetricsEvent * _impressionEvent;
    AMSUIWebNavigationBarModel * _navigationBar;
    struct CGSize { 
        double width; 
        double height; 
    }  _windowSize;
}

@property (nonatomic, retain) <AMSUIWebActionRunnable> *action;
@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, retain) NSString *actionButtonTitle;
@property (nonatomic, readonly) NSString *backgroundColor;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableReappearPlaceholder;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic) bool errorMessageInternalOnly;
@property (nonatomic, retain) NSString *errorTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AMSMetricsEvent *impressionEvent;
@property (nonatomic, readonly) AMSUIWebNavigationBarModel *navigationBar;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } windowSize;

+ (id)_messageFromError:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (id /* block */)actionBlock;
- (id)actionButtonTitle;
- (id)backgroundColor;
- (id)bundle;
- (id)context;
- (id)createViewControllerForContainer:(id)arg1;
- (id)description;
- (bool)disableReappearPlaceholder;
- (id)error;
- (id)errorMessage;
- (bool)errorMessageInternalOnly;
- (id)errorTitle;
- (id)impressionEvent;
- (id)initWithError:(id)arg1 context:(id)arg2 actionBlock:(id /* block */)arg3;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadPage;
- (id)navigationBar;
- (void)setAction:(id)arg1;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setErrorMessageInternalOnly:(bool)arg1;
- (void)setErrorTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })windowSize;

@end
