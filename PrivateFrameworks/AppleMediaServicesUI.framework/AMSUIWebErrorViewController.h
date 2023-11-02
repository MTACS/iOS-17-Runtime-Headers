
@interface AMSUIWebErrorViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {
    AMSUIWebAppearance * _appearance;
    AMSUIWebClientContext * _context;
    AMSUIErrorView * _errorView;
    AMSUIWebErrorPageModel * _model;
    bool  _showingCancelButton;
}

@property (nonatomic, retain) AMSUIWebAppearance *appearance;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AMSUIErrorView *errorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebErrorPageModel *model;
@property (nonatomic) bool showingCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (void)_showCancelButtonIfNeeded;
- (id)appearance;
- (id)context;
- (id)errorView;
- (id)initWithContext:(id)arg1;
- (void)loadView;
- (id)model;
- (void)setAppearance:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setShowingCancelButton:(bool)arg1;
- (bool)showingCancelButton;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
