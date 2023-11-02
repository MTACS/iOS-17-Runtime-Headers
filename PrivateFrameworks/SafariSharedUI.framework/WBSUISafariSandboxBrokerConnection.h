
@interface WBSUISafariSandboxBrokerConnection : WBSSafariSandboxBrokerConnection <WBSUISafariSandboxBrokerProtocol>

- (void)getLinkMetadataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
