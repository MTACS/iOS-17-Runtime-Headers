
@interface IAMModalTarget : NSObject <IAMMessageGroupInternalDelegate, IAMMessageTarget, IAMWebMessagePresentationCoordinatorDelegate> {
    IAMMessageCoordinator * _messageCoordinator;
    NSDictionary * _messageGroupsByGroupIdentifier;
    IAMPresentingModalMessageContext * _presentingMessageContext;
    NSString * _targetIdentifier;
    IAMWebMessagePresentationCoordinator * _webMessagePresentationCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *messageGroupsByGroupIdentifier;
@property (nonatomic, retain) IAMPresentingModalMessageContext *presentingMessageContext;
@property (nonatomic, readonly) bool shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetIdentifier;

+ (void)initialize;
+ (bool)isAnyModalTargetPresentingMessage;

- (void).cxx_destruct;
- (id)_applicationViewControllerForModalPresentation;
- (void)_handlePresentation:(id)arg1;
- (void)_handlePresentingMessageContextDidExpireBeforePresentation;
- (void)_presentMessage:(id)arg1 messageEntry:(id)arg2 fromViewController:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_presentWebModalMessageEntry:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_reportMessageDidAppearWithIdentifier:(id)arg1;
- (void)_reportMessageDidDisappearWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithMessageCoordinator:(id)arg1 targetIdentifier:(id)arg2;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3;
- (void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 fromMessageEntry:(id)arg3 forTarget:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)messageGroup:(id)arg1 didReportModalMessagePresentationFailedWithIdentifier:(id)arg2;
- (void)messageGroup:(id)arg1 didReportModalMessageWasDismissedWithIdentifier:(id)arg2;
- (void)messageGroup:(id)arg1 didReportModalMessageWasPresentedWithIdentifier:(id)arg2;
- (void)messageGroup:(id)arg1 didReportModalMessageWithIdentifier:(id)arg2 actionWasPerformedWithIdentifier:(id)arg3;
- (id)messageGroupsByGroupIdentifier;
- (void)presentationControllerDismissalTransitionDidEnd:(id)arg1;
- (id)presentingMessageContext;
- (void)setMessageGroupsByGroupIdentifier:(id)arg1;
- (void)setPresentingMessageContext:(id)arg1;
- (id)targetIdentifier;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)arg1;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)arg1 event:(id)arg2;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)arg1 actionConfiguration:(id)arg2;

@end
