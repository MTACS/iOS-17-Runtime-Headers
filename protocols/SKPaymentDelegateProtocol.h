
@protocol SKPaymentDelegateProtocol <NSObject>

@required

- (void)handleEngagementRequest:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)shouldContinueTransactionWithNewStorefront:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
