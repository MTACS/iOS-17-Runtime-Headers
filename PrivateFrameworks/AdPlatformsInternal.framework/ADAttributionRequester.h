
@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {
    NSString * _bundleID;
    NSXPCConnection * _connection;
    NSNumber * _transactionToken;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSNumber *transactionToken;

- (void).cxx_destruct;
- (bool)_isAppTrackingAuthorized;
- (void)beginAttributionRequest:(id)arg1 reason:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)bundleID;
- (id)connection;
- (id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3;
- (void)requestAttributionDetails:(id /* block */)arg1;
- (void)requestAttributionDetailsWithBlock:(id /* block */)arg1;
- (void)setBundleID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setServerToTest:(long long)arg1;
- (void)setStocksAdEnabled:(bool)arg1;
- (void)setTransactionToken:(id)arg1;
- (id)transactionToken;

@end
