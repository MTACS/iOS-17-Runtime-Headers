
@interface ADAttributionService : ADSingleton <NSXPCListenerDelegate> {
    NSMutableDictionary * _clients;
    NSXPCListener * _listener;
    NSNumber * _transactionID;
}

@property (nonatomic, retain) NSMutableDictionary *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *transactionID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)clients;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeClientForToken:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (id)transactionID;

@end
