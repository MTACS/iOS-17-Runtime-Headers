
@interface ICMarkupPresenter : NSObject <ICMarkupDismissalDelegate> {
    ICAttachment * _attachment;
    id /* block */  _completionBlock;
    id /* block */  _dismissCompletionBlock;
    id /* block */  _frameBlock;
    unsigned long long  _inkStyle;
    MURemoteViewController * _markupRemoteViewController;
    MarkupViewController * _markupViewController;
    bool  _markupWasDismissedByUserInteraction;
    UIViewController * _presentingViewController;
    id /* block */  _startPresentBlock;
}

@property (retain) ICAttachment *attachment;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissCompletionBlock;
@property (nonatomic, copy) id /* block */ frameBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inkStyle;
@property (nonatomic, retain) MURemoteViewController *markupRemoteViewController;
@property (nonatomic, retain) MarkupViewController *markupViewController;
@property (nonatomic) bool markupWasDismissedByUserInteraction;
@property UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ startPresentBlock;
@property (readonly) Class superclass;

+ (void)cleanupMarkup;
+ (void)markupAttachment:(id)arg1 fromView:(id)arg2 presentingViewController:(id)arg3 inkStyle:(unsigned long long)arg4 frameBlock:(id /* block */)arg5 startPresentBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7 dismissCompletionBlock:(id /* block */)arg8;

- (void).cxx_destruct;
- (id)attachment;
- (id /* block */)completionBlock;
- (id /* block */)dismissCompletionBlock;
- (void)dismissMarkupViewController;
- (id /* block */)frameBlock;
- (void)handleReturnedURL:(id)arg1;
- (unsigned long long)inkStyle;
- (void)markupCancelAction:(id)arg1;
- (void)markupDoneAction:(id)arg1;
- (id)markupRemoteViewController;
- (id)markupViewController;
- (void)markupViewWillDissappear;
- (bool)markupWasDismissedByUserInteraction;
- (void)presentMarkupFromView:(id)arg1;
- (void)presentMarkupUsingExtensionFromView:(id)arg1;
- (void)presentMarkupViewControllerFromView:(id)arg1;
- (id)presentingViewController;
- (void)saveChangesAndDismiss;
- (void)setAttachment:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDismissCompletionBlock:(id /* block */)arg1;
- (void)setFrameBlock:(id /* block */)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setMarkupRemoteViewController:(id)arg1;
- (void)setMarkupViewController:(id)arg1;
- (void)setMarkupWasDismissedByUserInteraction:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setStartPresentBlock:(id /* block */)arg1;
- (id /* block */)startPresentBlock;

@end
