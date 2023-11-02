
@interface NewsArticles.TipViewController : AMSUIBubbleTipViewController <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void eventHandler;
    void requestFactory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
    void styler;
    void tipPresentationConfig;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didLoadDialogRequest:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)messageViewControllerDidDismiss:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(bool)arg1;

@end
