
@protocol SecureChannelService

@required

- (void)actionForURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SecureChannelAction *, NSError *, void*
- (void)runApproverFlowForURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
