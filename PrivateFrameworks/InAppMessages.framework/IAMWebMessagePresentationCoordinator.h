
@interface IAMWebMessagePresentationCoordinator : NSObject <IAMViewControllerMetricsDelegate, IAMWebMessageControllerDelegate> {
    <IAMWebMessagePresentationCoordinatorDelegate> * _delegate;
    bool  _isPresenting;
    id /* block */  _modalViewControllerDismissedCompletion;
    NSURL * _webArchiveURL;
    IAMWebMessageController * _webMessageController;
    ICInAppMessageEntry * _webMessageEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IAMWebMessagePresentationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresenting;
@property (readonly) Class superclass;
@property (nonatomic, retain) IAMWebMessageController *webMessageController;
@property (nonatomic, retain) ICInAppMessageEntry *webMessageEntry;

- (void).cxx_destruct;
- (void)_dismissModalViewController:(id /* block */)arg1;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleWebMessageDismissed;
- (void)_modalViewControllerDismissalTransitionDidEnd:(id)arg1;
- (id)delegate;
- (id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2;
- (bool)isPresenting;
- (void)load;
- (bool)present;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setIsPresenting:(bool)arg1;
- (void)setWebMessageController:(id)arg1;
- (void)setWebMessageEntry:(id)arg1;
- (void)viewController:(id)arg1 didReportDismissalAction:(long long)arg2;
- (id)webMessageController;
- (void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 options:(id)arg3;
- (void)webMessageControllerWebViewDidRequestClose:(id)arg1;
- (void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2 options:(id)arg3;
- (id)webMessageEntry;

@end