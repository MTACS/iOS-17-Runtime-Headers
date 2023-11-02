
@interface SKClientBroker : NSObject <SKClientProtocol> {
    NSMapTable * _clients;
    NSHashTable * _messageListeners;
    NSHashTable * _purchaseIntentListeners;
    int  _receivedPurchaseIntentsToken;
    int  _storefrontChangedToken;
    NSString * _storefrontIdentifier;
    NSHashTable * _storefrontListeners;
    NSHashTable * _subscriptionStatusListeners;
    NSHashTable * _transactionListeners;
    int  _unfinishedTransactionsToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultBroker;

- (void).cxx_destruct;
- (void)_cancelNotifyTokenIfValid:(int)arg1;
- (void)_checkForPendingPurchaseIntents;
- (void)_checkStorefrontChangedNotify:(bool)arg1;
- (void)_handleUnfinishedTransactionsNotification;
- (void)_purchaseIntentObserverAdded;
- (void)_purchaseIntentObserverRemoved;
- (void)_storefrontObserverAdded;
- (void)_storefrontObserverRemoved;
- (id)_unfinishedTransactionsNotificationName;
- (void)askToShowMessageWithReplyBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)downloadAdded:(id)arg1;
- (void)downloadRemoved:(id)arg1;
- (void)downloadStatusChanged:(id)arg1;
- (void)handleAuthenticateRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)handleEngagementRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)hasAnyMessageListenersWithReply:(id /* block */)arg1;
- (bool)hasTransactionListener;
- (id)init;
- (void)pendingMessages:(id)arg1;
- (void)receivedPurchaseIntentsForProductIdentifiers:(id)arg1;
- (void)receivedStatuses:(id)arg1;
- (void)receivedTransactions:(id)arg1;
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;
- (void)registerMessageListener:(id)arg1;
- (void)registerPurchaseIntentsListener:(id)arg1;
- (void)registerStorefrontListener:(id)arg1;
- (void)registerSubscriptionStatusListener:(id)arg1;
- (void)registerTransactionListener:(id)arg1;
- (void)removedEntitlementsForProductIdentifiers:(id)arg1;
- (void)removedTransactions:(id)arg1;
- (void)storefrontChanged:(id)arg1;
- (void)unregisterClientWithIdentifier:(id)arg1;
- (void)unregisterMessageListener:(id)arg1;
- (void)unregisterPurchaseIntentsListener:(id)arg1;
- (void)unregisterStorefrontListener:(id)arg1;
- (void)unregisterSubscriptionStatusListener:(id)arg1;
- (void)unregisterTransactionListener:(id)arg1;
- (void)updatedTransactions:(id)arg1;

@end
