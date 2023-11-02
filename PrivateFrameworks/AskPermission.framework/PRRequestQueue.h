
@interface PRRequestQueue : NSObject {
    <PRRequestDelegate> * _delegate;
    NSString * _identifier;
}

@property (nonatomic) <PRRequestDelegate> *delegate;
@property (readonly) NSString *identifier;

+ (id)_requestQueueForIdentifier:(id)arg1;
+ (id)defaultRequestQueue;

- (void).cxx_destruct;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_clearCachedRequests;
- (void)_deleteTestValueFromTouchIDKeychain;
- (void)_didReceiveStorePushNotificationWithPayload:(id)arg1;
- (void)_didStartNewPurchaseRequestWithInfo:(id)arg1;
- (void)_pendingStorePurchaseRequestForItemIdentifier:(unsigned long long)arg1 replyBlock:(id /* block */)arg2;
- (id)_pushToken;
- (void)_readTestValueFromTouchIDKeychain;
- (void)_registerPushToken;
- (void)_requestToBePresentedWithReply:(id /* block */)arg1;
- (void)_userDidApproveRequestWithRequestID:(id)arg1;
- (void)_userDidDenyRequestWithRequestID:(id)arg1;
- (void)_writeTestValueToTouchIDKeychain;
- (void)askPermissionTo:(id)arg1 withRequestInfo:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (id)identifier;
- (void)pendingRequestsWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
