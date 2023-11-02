
@interface WFLinkDialogViewController : WFCompactDialogViewController {
    UIViewController * _snippetViewController;
}

@property (nonatomic, readonly) WFLinkSnippetDialogRequest *request;
@property (nonatomic, retain) UIViewController *snippetViewController;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (void)setSnippetViewController:(id)arg1;
- (id)snippetInteractedResponseWithURL:(id)arg1;
- (id)snippetViewController;
- (void)viewDidLoad;

@end
