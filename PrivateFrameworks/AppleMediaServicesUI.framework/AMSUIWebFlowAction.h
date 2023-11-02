
@interface AMSUIWebFlowAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    id  _actionData;
    long long  _animationType;
    NSString * _backgroundColor;
    bool  _deferredPresentation;
    AMSUIWebLoadingPageModel * _loadingPage;
    NSDictionary * _metrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _modalWindowSize;
    AMSUIWebNavigationBarModel * _navigationBar;
    long long  _popToRelativeIndex;
    long long  _presentationType;
    <AMSUIWebPageProvider> * _replacementPage;
    long long  _replacementType;
}

@property (nonatomic, retain) id actionData;
@property (nonatomic) long long animationType;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferredPresentation;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebLoadingPageModel *loadingPage;
@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic) struct CGSize { double x1; double x2; } modalWindowSize;
@property (nonatomic, retain) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic) long long popToRelativeIndex;
@property (nonatomic) long long presentationType;
@property (nonatomic, retain) <AMSUIWebPageProvider> *replacementPage;
@property (nonatomic) long long replacementType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_runWithType:(long long)arg1 options:(id)arg2;
- (id)actionData;
- (long long)animationType;
- (id)backgroundColor;
- (bool)deferredPresentation;
- (id)initWithContext:(id)arg1;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)loadingPage;
- (id)metrics;
- (struct CGSize { double x1; double x2; })modalWindowSize;
- (id)navigationBar;
- (long long)popToRelativeIndex;
- (long long)presentationType;
- (id)replacementPage;
- (long long)replacementType;
- (id)runAction;
- (void)setActionData:(id)arg1;
- (void)setAnimationType:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDeferredPresentation:(bool)arg1;
- (void)setLoadingPage:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setModalWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPopToRelativeIndex:(long long)arg1;
- (void)setPresentationType:(long long)arg1;
- (void)setReplacementPage:(id)arg1;
- (void)setReplacementType:(long long)arg1;

@end
