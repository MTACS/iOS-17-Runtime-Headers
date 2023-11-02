
@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter, UIViewControllerTransitioningDelegate> {
    NSURL * _URL;
    AMSUIWebAppOverlayViewController * _appOverlayViewController;
    AMSUIWebAppearance * _appearance;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    AMSUIWebClientContext * _context;
    <AMSUIWebPageViewControllerDelegate> * _delegate;
    AMSUIWebPageModel * _model;
    AMSUIWebView * _webView;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) AMSUIWebAppOverlayViewController *appOverlayViewController;
@property (nonatomic, readonly) AMSUIWebAppearance *appearance;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIWebPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebPageModel *model;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AMSUIWebView *webView;

- (void).cxx_destruct;
- (id)URL;
- (id)_appOverlayTransitioning;
- (void)_applyAppearance;
- (void)_didEncodeRequest:(id)arg1;
- (void)_downloadHTMLForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateLayout;
- (void)_updateToolbarButtonItems;
- (void)_willEncodeRequest:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)appOverlayViewController;
- (id)appearance;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)context;
- (id)delegate;
- (id)dismissAppOverlay;
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;
- (id)loadRequest:(id)arg1;
- (void)loadView;
- (id)model;
- (id)presentAppOverlayWithAdamID:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setAppOverlayViewController:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setURL:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)webView;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
