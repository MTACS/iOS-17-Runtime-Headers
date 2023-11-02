
@interface MERemoteExtensionContext : NSExtensionContext <MERemoteExtensionProtocol> {
    NSMapTable * _composeSessionToHandlerMap;
}

@property (nonatomic, retain) NSMapTable *composeSessionToHandlerMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <MEExtensionRemoteHostProtocol> *remoteHostPoxy;
@property (readonly, copy) NSArray *requiredHeaders;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)log;

- (void).cxx_destruct;
- (id)_composeSessionInterfaceForSession:(id)arg1;
- (id)_contentBlockerInterface;
- (id)_createPrincipalObject;
- (id)_extensionInterface;
- (id)_mailActionInterface;
- (id)_messageSecurityHandlerInterface;
- (id)additionalHeadersForSession:(id)arg1;
- (id)composeSessionToHandlerMap;
- (id)contentRulesJSON;
- (void)contentRulesJSONWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)decideActionForMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)decodedMessageForMessageData:(id)arg1;
- (id)decodedMessageForMessageData:(id)arg1 decodeContext:(id)arg2;
- (void)decodedMessageForMessageData:(id)arg1 decodeContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)encodeMessage:(id)arg1 composeContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)extensionViewControllerForMessageContext:(id)arg1;
- (id)extensionViewControllerForMessageSigners:(id)arg1;
- (void)getEncodingStatusForMessage:(id)arg1 composeContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)mailComposeSessionDidBegin:(id)arg1;
- (void)mailComposeSessionDidEnd:(id)arg1;
- (void)primaryActionClickedForMessageContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteHostPoxy;
- (id)remoteProxy;
- (id)requiredHeaders;
- (void)requiredHeadersWithCompletion:(id /* block */)arg1;
- (void)session:(id)arg1 annotateAddressesWithCompletionHandler:(id /* block */)arg2;
- (void)session:(id)arg1 canSendMessageWithCompletionHandler:(id /* block */)arg2;
- (void)session:(id)arg1 getAdditionalHeadersWithCompletion:(id /* block */)arg2;
- (void)setComposeSessionToHandlerMap:(id)arg1;
- (id)viewControllerForSession:(id)arg1;

@end
