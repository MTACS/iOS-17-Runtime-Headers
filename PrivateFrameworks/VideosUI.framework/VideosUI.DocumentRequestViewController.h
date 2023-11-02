
@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController <VideosUI.VUIDeeplinkURLHandlingInterceptor> {
    void $__lazy_storage_$_pagePerformanceReporter;
    void documentInteractor;
    void documentInteractorObserver;
    void documentOptions;
    void initialControllerRef;
    void initialRequestSent;
    void playbackObserver;
    void requestContext;
    void sendInitialRequestOnViewWillAppear;
    void shouldHideLoadingView;
    void staticPPTDocumentFolderPath;
    void viewControllerDocumentIdentifier;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)deeplinkURLWasHandled:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;

@end
