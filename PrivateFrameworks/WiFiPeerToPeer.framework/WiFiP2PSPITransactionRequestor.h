
@interface WiFiP2PSPITransactionRequestor : NSObject <WiFiP2PXPCConnectionDelegate> {
    NSMutableArray * _openTransactions;
    WiFiP2PXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)shared;

- (void).cxx_destruct;
- (void)_removeOpenTransaction:(long long)arg1;
- (void)beginTransaction:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)endTransaction:(long long)arg1;
- (void)endTransaction:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)handleConnectionEstablishedWithProxy:(id)arg1;
- (id)init;
- (id)remoteObjectInterface;
- (void)startConnectionUsingProxy:(id)arg1 completionHandler:(id /* block */)arg2;

@end
