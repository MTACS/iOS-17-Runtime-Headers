
@protocol WBSUISafariSandboxBrokerProtocol <WBSSafariSandboxBrokerProtocol>

@required

- (void)loadLinkPresentationMetdataForMessageWithGUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, UIImage *, NSError *, void*

@optional

- (void)getLinkMetadataForMessageWithGUID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LPLinkMetadata *, NSError *, void*

@end
