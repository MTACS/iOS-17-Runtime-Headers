
@interface PassKitUI.SavingsDashboardMessageSource : NSObject <PKDiscoveryObserver, PKPaymentDataProviderDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _messages;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _presentContactSupport;
    void accountModel;
    void accountService;
    void cancellables;
    void discoveryService;
    void engagementMessagePendingDismissalIds;
    void engagementMessages;
    void fccStepUpModel;
    void iconSize;
    void localMessages;
    void messageIdentifierAccountAPYUpdate;
    void messageIdentifierAccountNegativeBalance;
    void messageIdentifierAccountStatus;
    void messageIdentifierFCCStepUpCompletion;
    void messageIdentifierHold;
    void messageIdentifierSavingsInterest;
    void messageIdentifierTransferCash;
    void presentActionSheet;
    void rdfiTransferCompleted;
    void transactionProvider;
    void updateEngagementMessagePublisher;
    void updateLocalMessagePublisher;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)discoveryService:(id)arg1 dialogRequestsChangedForPlacement:(id)arg2;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)arg1;
- (id)init;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;

@end
