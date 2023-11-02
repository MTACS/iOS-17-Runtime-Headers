
@interface ASCAgentListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    <ASPublicKeyCredentialManagerInterface> * _publicKeyCredentialManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPublicKeyCredentialManager:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
