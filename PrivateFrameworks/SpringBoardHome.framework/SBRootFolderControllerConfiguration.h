
@interface SBRootFolderControllerConfiguration : SBFolderControllerConfiguration {
    bool  _dockExternal;
    unsigned long long  _folderPageManagementAllowedOrientations;
    bool  _forSnapshot;
    unsigned long long  _ignoresOverscrollOnFirstPageOrientations;
    unsigned long long  _ignoresOverscrollOnLastPageOrientations;
    UIViewController<SBHRootFolderCustomViewPresenting> * _leadingCustomViewController;
    UIViewController * _pullDownSearchViewController;
    UIView<SBHLegibility> * _scrollAccessoryAuxiliaryView;
    UIView * _scrollAccessoryBackgroundView;
    UIViewController<SBHSearchPresentable> * _searchPresentableViewController;
    <SBHSearchPresenting> * _searchPresenter;
    unsigned long long  _showsAddWidgetButtonWhileEditingAllowedOrientations;
    bool  _showsDoneButtonWhileEditing;
    UIViewController<SBHRootFolderCustomViewPresenting> * _trailingCustomViewController;
}

@property (getter=isDockExternal, nonatomic) bool dockExternal;
@property (nonatomic) unsigned long long folderPageManagementAllowedOrientations;
@property (getter=isForSnapshot, nonatomic) bool forSnapshot;
@property (nonatomic) unsigned long long ignoresOverscrollOnFirstPageOrientations;
@property (nonatomic) unsigned long long ignoresOverscrollOnLastPageOrientations;
@property (nonatomic, retain) UIViewController<SBHRootFolderCustomViewPresenting> *leadingCustomViewController;
@property (nonatomic, retain) UIViewController *pullDownSearchViewController;
@property (nonatomic, retain) UIView<SBHLegibility> *scrollAccessoryAuxiliaryView;
@property (nonatomic, retain) UIView *scrollAccessoryBackgroundView;
@property (nonatomic, retain) UIViewController<SBHSearchPresentable> *searchPresentableViewController;
@property (nonatomic, retain) <SBHSearchPresenting> *searchPresenter;
@property (nonatomic) unsigned long long showsAddWidgetButtonWhileEditingAllowedOrientations;
@property (nonatomic) bool showsDoneButtonWhileEditing;
@property (nonatomic, retain) UIViewController<SBHLegibility> *todayViewController;
@property (nonatomic, retain) UIViewController<SBHRootFolderCustomViewPresenting> *trailingCustomViewController;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)folderPageManagementAllowedOrientations;
- (unsigned long long)ignoresOverscrollOnFirstPageOrientations;
- (unsigned long long)ignoresOverscrollOnLastPageOrientations;
- (id)initWithConfiguration:(id)arg1;
- (bool)isDockExternal;
- (bool)isForSnapshot;
- (id)leadingCustomViewController;
- (id)pullDownSearchViewController;
- (id)scrollAccessoryAuxiliaryView;
- (id)scrollAccessoryBackgroundView;
- (id)searchPresentableViewController;
- (id)searchPresenter;
- (void)setDockExternal:(bool)arg1;
- (void)setFolderPageManagementAllowedOrientations:(unsigned long long)arg1;
- (void)setForSnapshot:(bool)arg1;
- (void)setIgnoresOverscrollOnFirstPageOrientations:(unsigned long long)arg1;
- (void)setIgnoresOverscrollOnLastPageOrientations:(unsigned long long)arg1;
- (void)setLeadingCustomViewController:(id)arg1;
- (void)setPullDownSearchViewController:(id)arg1;
- (void)setScrollAccessoryAuxiliaryView:(id)arg1;
- (void)setScrollAccessoryBackgroundView:(id)arg1;
- (void)setSearchPresentableViewController:(id)arg1;
- (void)setSearchPresenter:(id)arg1;
- (void)setShowsAddWidgetButtonWhileEditingAllowedOrientations:(unsigned long long)arg1;
- (void)setShowsDoneButtonWhileEditing:(bool)arg1;
- (void)setTodayViewController:(id)arg1;
- (void)setTrailingCustomViewController:(id)arg1;
- (unsigned long long)showsAddWidgetButtonWhileEditingAllowedOrientations;
- (bool)showsDoneButtonWhileEditing;
- (id)todayViewController;
- (id)trailingCustomViewController;

@end
