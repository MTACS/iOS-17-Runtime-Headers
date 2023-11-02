
@interface FCReceiptRefresher : NSObject <FCReceiptRefresherType, SKRequestDelegate> {
    NFPendingPromise * _pendingPromise;
    SKReceiptRefreshRequest * _request;
    NSString * _restoreBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NFPendingPromise *pendingPromise;
@property (nonatomic, retain) SKReceiptRefreshRequest *request;
@property (nonatomic, copy) NSString *restoreBundleID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)pendingPromise;
- (id)refreshForPurchase:(id)arg1;
- (id)request;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (id)restoreBundleID;
- (void)setPendingPromise:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRestoreBundleID:(id)arg1;

@end
