
@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {
    bool  _animateFadeIn;
    AMSUIWebAppearance * _appearance;
    AMSUIWebClientContext * _context;
    bool  _hasAppeared;
    bool  _isVisible;
    AMSUILoadingView * _loadingView;
    AMSUIWebLoadingPageModel * _model;
    UIViewController<AMSUIWebPagePresenter> * _originalViewController;
    bool  _shouldSnapshot;
    AMSBinaryPromise * _snapshotPromise;
    UIView * _snapshotView;
    UIView * _visibleView;
}

@property (nonatomic) bool animateFadeIn;
@property (nonatomic, retain) AMSUIWebAppearance *appearance;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAppeared;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isVisible;
@property (nonatomic, retain) AMSUILoadingView *loadingView;
@property (nonatomic, retain) AMSUIWebLoadingPageModel *model;
@property (nonatomic, retain) UIViewController<AMSUIWebPagePresenter> *originalViewController;
@property (nonatomic) bool shouldSnapshot;
@property (nonatomic, retain) AMSBinaryPromise *snapshotPromise;
@property (nonatomic, retain) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *visibleView;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)_replacePrimaryViewWithView:(id)arg1 animated:(bool)arg2;
- (void)_startReappearTransitionTimerAnimated:(bool)arg1;
- (void)_transitionToLoadingAnimated:(bool)arg1;
- (void)_transitionToSnapshot;
- (bool)animateFadeIn;
- (id)appearance;
- (void)awaitSnapshotWithCompletion:(id /* block */)arg1;
- (id)context;
- (void)dealloc;
- (bool)hasAppeared;
- (id)initWithContext:(id)arg1;
- (id)initWithModel:(id)arg1 context:(id)arg2 appearance:(id)arg3;
- (id)initWithSnapshot:(id)arg1 context:(id)arg2 appearance:(id)arg3;
- (bool)isVisible;
- (void)loadView;
- (id)loadingView;
- (id)model;
- (id)originalViewController;
- (void)setAnimateFadeIn:(bool)arg1;
- (void)setAppearance:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setOriginalViewController:(id)arg1;
- (void)setShouldSnapshot:(bool)arg1;
- (void)setSnapshotPromise:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setVisibleView:(id)arg1;
- (bool)shouldSnapshot;
- (id)snapshotPromise;
- (id)snapshotView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibleView;
- (void)willAppearAfterDismiss;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
