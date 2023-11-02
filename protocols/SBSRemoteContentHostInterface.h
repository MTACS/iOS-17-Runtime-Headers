
@protocol SBSRemoteContentHostInterface

@required

- (void)didChangeStyle;
- (void)getContentBoundsWithReplyBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)presentAlert:(void *)arg1 replyBlock:(void *)arg2; // needs 2 arg types, found 7: SBSRemoteContentAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSRemoteContentAlertAction *, void*

@end
