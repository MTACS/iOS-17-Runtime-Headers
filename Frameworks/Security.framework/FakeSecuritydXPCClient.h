
@interface FakeSecuritydXPCClient : NSObject <SecuritydXPCClientInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)protocolWithSync:(bool)arg1 errorHandler:(id /* block */)arg2;

@end
