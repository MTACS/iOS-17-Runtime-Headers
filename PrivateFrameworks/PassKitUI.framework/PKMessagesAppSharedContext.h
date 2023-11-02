
@interface PKMessagesAppSharedContext : NSObject <PKPaymentDataProviderDelegate> {
    NSMutableDictionary * _externalizedControllerStateStore;
    PKPaymentDefaultDataProvider * _paymentServiceDataProvider;
    NSMutableArray * _pendingPrimaryHandlers;
    <PKMessagesAppControllerInterface> * _primaryAppController;
    PKTransactionSource * _transactionSource;
    NSPointerArray * _weakBubbleAppControllers;
}

@property (nonatomic, readonly, copy) NSArray *bubbleAppControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKMessagesAppControllerInterface> *primaryAppController;
@property (readonly) Class superclass;

+ (id)sharedContext;

- (void).cxx_destruct;
- (id)_directoryPath;
- (void)_purgeOldCacheEntries;
- (void)_registerAppViewController:(id)arg1;
- (void)_revealPrimaryAppController:(id)arg1;
- (id)_sharedDirectoryPath;
- (id)_urlForMessageIdentifier:(id)arg1;
- (void)_withPrimaryAppController:(id /* block */)arg1;
- (id)bubbleAppControllers;
- (id)description;
- (id)externalizedControllerStateForMessageIdentifier:(id)arg1;
- (void)handlePaymentRequestMessage:(id)arg1 sender:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)persistExternalizedControllerState:(id)arg1 forMessageIdentifier:(id)arg2;
- (id)primaryAppController;
- (void)removeExternalizedControllerStateDataForMessageIdentifier:(id)arg1;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;

@end
