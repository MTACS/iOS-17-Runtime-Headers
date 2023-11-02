
@interface NPKPeerPaymentConversationManager : NSObject {
    MSConversation * _activeConversation;
    NPKPeerPaymentConversationContext * _conversationContext;
    PKPeerPaymentController * _currentPeerPaymentController;
    NSString * _currentRecipientAddressLookup;
    <NPKPeerPaymentConversationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPeerPaymentService * _peerPaymentService;
    PKPeerPaymentRecipient * _recipient;
}

@property (retain) MSConversation *activeConversation;
@property (nonatomic, retain) NPKPeerPaymentConversationContext *conversationContext;
@property (nonatomic) PKPeerPaymentController *currentPeerPaymentController;
@property (nonatomic, retain) NSString *currentRecipientAddressLookup;
@property (nonatomic) <NPKPeerPaymentConversationManagerDelegate> *delegate;
@property (nonatomic, retain) PKPeerPaymentService *peerPaymentService;
@property (readonly) PKPeerPaymentRecipient *recipient;
@property (nonatomic, readonly, copy) NSString *recipientDisplayName;
@property (nonatomic, readonly) bool recipientFoundInContacts;
@property (nonatomic, readonly) NSString *recipientPhoneOrEmail;
@property (nonatomic, readonly) NSString *senderPhoneOrEmail;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (id)_ambiguousSenderAddressErrorWithUnderlyingError:(id)arg1;
- (id)_displayableErrorWithError:(id)arg1;
- (void)_internalQueue_forceLookupRecipientInformation;
- (void)_internalQueue_lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (void)_internalQueue_performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (void)_internalQueue_performRequestWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (id)_lockedOrRestrictedAccountErrorWithUnderlyingError:(id)arg1;
- (id)_negativeBalanceErrorWithUnderlyingError:(id)arg1;
- (id)_newPeerPaymentController;
- (id)_newPeerPaymentControllerWithQueue:(id)arg1;
- (void)_postNotificationWithRecipient:(id)arg1 error:(id)arg2;
- (id)_sharedPeerPaymentWebService;
- (id)_skeletonPeerPaymentQuoteWithPeerPaymentController:(id)arg1 selectedAmount:(id)arg2 recipient:(id)arg3;
- (id)_unknownPaymentErrorWithUnderlyingError:(id)arg1;
- (id)activeConversation;
- (id)conversationContext;
- (id)currentPeerPaymentController;
- (id)currentRecipientAddressLookup;
- (id)delegate;
- (id)init;
- (void)lookupRecipientInformationIfNecessary;
- (void)lookupRecipientInformationWithAddress:(id)arg1 senderAddress:(id)arg2;
- (id)peerPaymentService;
- (void)performPaymentWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (void)performRequestWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (id)recipient;
- (id)recipientDisplayName;
- (bool)recipientFoundInContacts;
- (id)recipientPhoneOrEmail;
- (id)senderPhoneOrEmail;
- (void)setActiveConversation:(id)arg1;
- (void)setConversationContext:(id)arg1;
- (void)setCurrentPeerPaymentController:(id)arg1;
- (void)setCurrentRecipientAddressLookup:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPeerPaymentService:(id)arg1;

@end
