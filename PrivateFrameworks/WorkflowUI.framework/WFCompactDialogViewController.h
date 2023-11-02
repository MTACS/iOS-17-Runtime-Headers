
@interface WFCompactDialogViewController : WFCompactPlatterViewController {
    NSArray * _actions;
    WFCompactDialogAction * _cancelAction;
    <WFCompactDialogViewControllerDelegate> * _delegate;
    WFCompactDialogAction * _preferredAction;
    WFDialogRequest * _request;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) WFCompactDialogAction *cancelAction;
@property (nonatomic) <WFCompactDialogViewControllerDelegate> *delegate;
@property (nonatomic, retain) WFCompactDialogAction *preferredAction;
@property (nonatomic, readonly) WFDialogRequest *request;

- (void).cxx_destruct;
- (id)actions;
- (bool)canBecomeFirstResponder;
- (bool)canHandleFollowUpRequest:(id)arg1;
- (id)cancelAction;
- (void)cancelKeyPressed;
- (void)configureActionGroupWithActions:(id)arg1;
- (id)delegate;
- (void)doneKeyPressed;
- (void)finishWithResponse:(id)arg1;
- (void)finishWithResponse:(id)arg1 waitForFollowUpRequest:(bool)arg2;
- (void)handleFollowUpRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)keyCommands;
- (void)loadView;
- (id)preferredAction;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)arg1;
- (id)request;
- (void)setActions:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredAction:(id)arg1;
- (void)systemDismissedBanner;

@end
