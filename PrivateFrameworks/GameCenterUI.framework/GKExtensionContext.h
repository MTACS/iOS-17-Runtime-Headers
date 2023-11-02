
@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol> {
    long long  _sandboxToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sandboxToken;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(id /* block */)arg3;
- (void)messageFromClient:(id)arg1;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)sandboxToken;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setSandboxToken:(long long)arg1;
- (void)tearDownExtensionWithReply:(id /* block */)arg1;

@end
