
@interface AMSUIWebFlowOptions : NSObject {
    bool  _animated;
    NSString * _backgroundColor;
    bool  _deferredPresentation;
    bool  _disableTimeout;
    AMSUIWebLoadingPageModel * _loadingPage;
    long long  _modalPresentationStyle;
    long long  _modalTransitionStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _modalWindowSize;
    AMSUIWebNavigationBarModel * _navigationBar;
    NSDictionary * _pageData;
    bool  _reuseExistingPage;
    bool  _suppressErrorPage;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) NSString *backgroundColor;
@property (nonatomic) bool deferredPresentation;
@property (nonatomic) bool disableTimeout;
@property (nonatomic, retain) AMSUIWebLoadingPageModel *loadingPage;
@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic) long long modalTransitionStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } modalWindowSize;
@property (nonatomic, retain) AMSUIWebNavigationBarModel *navigationBar;
@property (nonatomic, retain) NSDictionary *pageData;
@property (nonatomic) bool reuseExistingPage;
@property (nonatomic) bool suppressErrorPage;

- (void).cxx_destruct;
- (bool)animated;
- (id)backgroundColor;
- (bool)deferredPresentation;
- (bool)disableTimeout;
- (id)loadingPage;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (struct CGSize { double x1; double x2; })modalWindowSize;
- (id)navigationBar;
- (id)pageData;
- (bool)reuseExistingPage;
- (void)setAnimated:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDeferredPresentation:(bool)arg1;
- (void)setDisableTimeout:(bool)arg1;
- (void)setLoadingPage:(id)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setModalTransitionStyle:(long long)arg1;
- (void)setModalWindowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNavigationBar:(id)arg1;
- (void)setPageData:(id)arg1;
- (void)setReuseExistingPage:(bool)arg1;
- (void)setSuppressErrorPage:(bool)arg1;
- (bool)suppressErrorPage;

@end
