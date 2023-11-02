
@interface SLConversationExtensionHostContext : NSExtensionContext <SLConversationExtensionHostProtocol> {
    id /* block */  _dismissalRequestHandler;
    NSString * _messageGUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalRequestHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *messageGUID;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)createURLWithMessageGUIDForCurrentURL:(id)arg1;
- (id /* block */)dismissalRequestHandler;
- (id)messageGUID;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestDismissal;
- (void)setDismissalRequestHandler:(id /* block */)arg1;
- (void)setMessageGUID:(id)arg1;

@end
