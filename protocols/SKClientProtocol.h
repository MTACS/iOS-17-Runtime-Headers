
@protocol SKClientProtocol <SKStatusReceiverProtocol, SKTransactionReceiverProtocol, SKDialogProtocol, SKMessageReceiverProtocol>

@required

- (void)askToShowMessageWithReplyBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*
- (void)downloadAdded:(NSDictionary *)arg1;
- (void)downloadRemoved:(NSDictionary *)arg1;
- (void)downloadStatusChanged:(NSDictionary *)arg1;
- (void)hasAnyMessageListenersWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)receivedPurchaseIntentsForProductIdentifiers:(NSArray *)arg1;
- (void)removedEntitlementsForProductIdentifiers:(NSArray *)arg1;
- (void)removedTransactions:(NSArray *)arg1;
- (void)storefrontChanged:(StorefrontInfo *)arg1;
- (void)updatedTransactions:(NSArray *)arg1;

@end
