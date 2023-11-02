
@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate> {
    NSMutableSet * _anonymousClients;
    NSLock * _anonymousClientsLock;
    NSMutableSet * _clientPIDs;
    NSLock * _clientPIDsLock;
    id /* block */  _clientRegistrationHandler;
    id /* block */  _clientUnregistrationHandler;
    NSMutableDictionary * _clientsByIdentifier;
    NSLock * _clientsByIdentifierLock;
    unsigned long long  _nextWaitForClientTokenValue;
    NSLock * _nextWaitForClientTokenValueLock;
    NSMutableDictionary * _waitForClientRegistriesByIdentifier;
    NSLock * _waitForClientRegistriesByIdentifierLock;
}

@property (nonatomic, copy) id /* block */ clientRegistrationHandler;
@property (nonatomic, copy) id /* block */ clientUnregistrationHandler;
@property (nonatomic, readonly) NSDictionary *clientsByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClientManager;

- (void).cxx_destruct;
- (void)_addClient:(id)arg1;
- (void)_removeClient:(id)arg1;
- (id /* block */)clientRegistrationHandler;
- (id /* block */)clientUnregistrationHandler;
- (id)clientsByIdentifier;
- (void)dealloc;
- (void)enumerateClientsWithBlock:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClientRegistrationHandler:(id /* block */)arg1;
- (void)setClientUnregistrationHandler:(id /* block */)arg1;
- (void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(id)arg2;
- (id)waitForClientWithIdentifier:(id)arg1 handler:(id /* block */)arg2;

@end
