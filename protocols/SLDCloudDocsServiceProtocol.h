
@protocol SLDCloudDocsServiceProtocol <NSObject>

@required

- (void)getCollaborationHighlightForShareURL:(void *)arg1 fileURL:(void *)arg2 sandboxTokenData:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SLCollaborationHighlight *, void*
- (void)prepareConnectionWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)shareURLForFileURL:(void *)arg1 sandboxTokenData:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@end
