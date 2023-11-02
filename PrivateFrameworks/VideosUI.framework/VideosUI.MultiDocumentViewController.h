
@interface VideosUI.MultiDocumentViewController : VideosUI.DocumentViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor> {
    void $__lazy_storage_$_pinningHeaderView;
    void $__lazy_storage_$_statusBarView;
    void allowsDocumentSelection;
    void documentInteractors;
    void interactorObservers;
    void internalPerformanceReporters;
    void largeTitleAccessoryView;
    void multiLoadingViewManager;
    void parentDocumentDataSource;
    void parentTitle;
    void parentTitleContextDataKey;
    void placeholderDocument;
    void placeholderInteractor;
    void segments;
    void segmentsContextDataIdentifierKey;
    void segmentsContextDataKey;
    void segmentsContextDataTitleKey;
    void selectedDocumentIndex;
    void templateViewControllers;
}

- (void).cxx_destruct;
- (bool)deeplinkURLWasHandled:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;

@end
