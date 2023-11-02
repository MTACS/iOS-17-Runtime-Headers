
@interface DCMarkupPresenter : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _dismissCompletionBlock;
    ICDocCamDocumentInfo * _documentInfo;
    id /* block */  _frameBlock;
    ICDocCamImageCache * _imageCache;
    unsigned long long  _inkStyle;
    MURemoteViewController * _markupRemoteViewController;
    MarkupViewController * _markupViewController;
    UIViewController * _presentingViewController;
    id /* block */  _startPresentBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ dismissCompletionBlock;
@property (retain) ICDocCamDocumentInfo *documentInfo;
@property (nonatomic, copy) id /* block */ frameBlock;
@property (retain) ICDocCamImageCache *imageCache;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic, retain) MURemoteViewController *markupRemoteViewController;
@property (nonatomic, retain) MarkupViewController *markupViewController;
@property UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ startPresentBlock;

+ (void)cleanupMarkup;
+ (void)markupDocumentInfo:(id)arg1 imageCache:(id)arg2 fromView:(id)arg3 presentingViewController:(id)arg4 inkStyle:(unsigned long long)arg5 frameBlock:(id /* block */)arg6 startPresentBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8 dismissCompletionBlock:(id /* block */)arg9;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id /* block */)dismissCompletionBlock;
- (void)dismissMarkupViewController;
- (id)documentInfo;
- (id /* block */)frameBlock;
- (void)handleReturnedURL:(id)arg1;
- (id)imageCache;
- (unsigned long long)inkStyle;
- (void)markupCancelAction:(id)arg1;
- (void)markupDoneAction:(id)arg1;
- (id)markupRemoteViewController;
- (id)markupViewController;
- (void)presentMarkupFromView:(id)arg1;
- (void)presentMarkupViewControllerFromView:(id)arg1;
- (id)presentingViewController;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDismissCompletionBlock:(id /* block */)arg1;
- (void)setDocumentInfo:(id)arg1;
- (void)setFrameBlock:(id /* block */)arg1;
- (void)setImageCache:(id)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setMarkupRemoteViewController:(id)arg1;
- (void)setMarkupViewController:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setStartPresentBlock:(id /* block */)arg1;
- (id /* block */)startPresentBlock;

@end
