
@interface SUPlaceholderViewController : SUViewController {
    SUGradient * _backgroundGradient;
    SUGradient * _defaultBackgroundGradient;
    SUGradientView * _gradientView;
    bool  _hideLoadingView;
    SULoadingView * _loadingView;
}

@property (nonatomic, copy) SUGradient *backgroundGradient;
@property (nonatomic, copy) SUGradient *defaultBackgroundGradient;
@property (nonatomic, readonly) SULoadingView *loadingView;
@property (nonatomic) bool shouldShowLoadingView;

- (void)_bagDidLoadNotification:(id)arg1;
- (id)_copyActiveGradient;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadBackgroundGradient;
- (void)_reloadLoadingView;
- (id)backgroundGradient;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)dealloc;
- (id)defaultBackgroundGradient;
- (id)init;
- (void)loadView;
- (id)loadingView;
- (void)parentViewControllerHierarchyDidChange;
- (void)setBackgroundGradient:(id)arg1;
- (void)setDefaultBackgroundGradient:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setShouldShowLoadingView:(bool)arg1;
- (void)setSkLoading:(bool)arg1;
- (bool)shouldShowLoadingView;

@end
