
@interface PKPeerPaymentRemoteMessagesComposer : NSObject {
    long long  _actionType;
    PKPeerPaymentMessageComposeController * _composeController;
    NSString * _memo;
    PKPeerPaymentController * _peerPaymentController;
    UIViewController * _presentingViewController;
    PKPeerPaymentRecipient * _recipient;
    PKPeerPaymentRecurringPayment * _recurringPayment;
    PKPeerPaymentRequestToken * _requestToken;
    MSSession * _session;
    unsigned long long  _sourceType;
}

@property (nonatomic) long long actionType;
@property (nonatomic, readonly) PKPeerPaymentController *peerPaymentController;

- (void).cxx_destruct;
- (void)_confirmPaymentMessageInsertionWithQuote:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleError:(id)arg1;
- (void)_insertPaymentMessageWithQuote:(id)arg1 completion:(id /* block */)arg2;
- (void)_insertRequestMessageWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPeerPaymentMessage:(id)arg1 completion:(id /* block */)arg2;
- (bool)_recipientFoundInContacts;
- (void)_showAlertForInvalidRecipientWithName:(id)arg1 statusReason:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_showAlertForInvalidStateIfNeededWithCompletion:(id /* block */)arg1;
- (long long)actionType;
- (id)initWithPeerPaymentController:(id)arg1 presentingViewController:(id)arg2 actionType:(long long)arg3 sourceType:(unsigned long long)arg4;
- (id)peerPaymentController;
- (void)presentRemoteMessageComposerWithAmount:(id)arg1 requestToken:(id)arg2 memo:(id)arg3 sessionID:(id)arg4 overViewController:(id)arg5 completion:(id /* block */)arg6;
- (void)presentRemoteMessageComposerWithRecurringPayment:(id)arg1 sessionID:(id)arg2 overViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)setActionType:(long long)arg1;
- (void)validateRecipientWithAddress:(id)arg1 completion:(id /* block */)arg2;

@end
