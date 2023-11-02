
@protocol MSComposeBodyFieldObserver <NSObject>

@required

- (void)composeBodyFieldAddAttachmentWithData:(NSData *)arg1 filename:(NSString *)arg2 mimeType:(NSString *)arg3 uniqueID:(NSString *)arg4;
- (void)composeBodyFieldAddLinkPreviewsEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)composeBodyFieldDidChange;
- (void)composeBodyFieldDidThrowException:(NSException *)arg1;
- (void)composeBodyFieldQuickReplyEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
