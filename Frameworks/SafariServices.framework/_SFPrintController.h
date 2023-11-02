
@interface _SFPrintController : NSObject <SFPrintPageRendererDelegate, UIPrintInteractionControllerDelegate> {
    UIPrintInfo * _cachedPrintInfo;
    SFPrintPageRenderer * _cachedPrintPageRenderer;
    SFPrintQueueItem * _currentItem;
    <_SFPrintControllerDelegate> * _delegate;
    <SFDialogPresenting> * _dialogPresenter;
    bool  _hasSetupPrintController;
    bool  _isDisplayingPrintInteractionController;
    NSString * _loadingDialogTitle;
    NSString * _pageTitle;
    UIPrintInteractionController * _printInteractionController;
    NSMutableArray * _printQueue;
    _SFReaderController * _readerController;
    bool  _suppressingPrintUI;
    NSString * _urlString;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFPrintControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SFDialogPresenting> *dialogPresenter;
@property (getter=isDisplayingPrintUI, nonatomic, readonly) bool displayingPrintUI;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPrintInfo *printInfo;
@property (nonatomic, readonly) UIPrintInteractionController *printInteractionController;
@property (nonatomic, readonly) SFPrintPageRenderer *printRenderer;
@property (nonatomic) _SFReaderController *readerController;
@property (nonatomic, readonly) NSString *suggestedPDFFileName;
@property (readonly) Class superclass;
@property (nonatomic) WKWebView *webView;

- (void).cxx_destruct;
- (id)_dequeuePrintItem;
- (void)_didFinishPrintingCurrentItemWithResult:(long long)arg1 fromPrintInteractionControllerCompletion:(bool)arg2;
- (void)_enqueuePrintItem:(id)arg1;
- (bool)_isContentManaged;
- (void)_preparePrintInteractionControllerForUsage:(long long)arg1 onlyIfLoaded:(bool)arg2 completion:(id /* block */)arg3;
- (void)_printCurrentItem;
- (void)_shouldAllowBlockedPrintWithCompletionHandler:(id /* block */)arg1;
- (void)_shouldPrintWhileLoadingForUsage:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)clearQueue;
- (void)dealloc;
- (id)delegate;
- (id)dialogPresenter;
- (void)dismissPrintInteractionControllerAnimated:(bool)arg1;
- (void)getPDFDataForUsage:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)handleNextPrintRequest;
- (id)init;
- (bool)isDisplayingPrintUI;
- (void)preparePrintInteractionControllerForUsage:(long long)arg1 completion:(id /* block */)arg2;
- (id)presentingViewControllerForPrintPageRenderer:(id)arg1;
- (void)printFrame:(id)arg1 initiatedByWebContent:(bool)arg2 completion:(id /* block */)arg3;
- (id)printInfo;
- (id)printInteractionController;
- (void)printInteractionControllerDidFinish;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (id)printRenderer;
- (id)readerController;
- (void)resetPrintUISuppression;
- (void)setDelegate:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)setReaderController:(id)arg1;
- (bool)setUpPrintController;
- (void)setWebView:(id)arg1;
- (id)suggestedPDFFileName;
- (void)updatePrintInfo;
- (id)webView;

@end
