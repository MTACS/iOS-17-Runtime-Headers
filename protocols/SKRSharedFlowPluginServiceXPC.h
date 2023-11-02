
@protocol SKRSharedFlowPluginServiceXPC

@required

- (void)endTurnWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)loadFlowPluginWithBundleId:(void *)arg1 bundlePath:(void *)arg2 rcId:(void *)arg3 hypothesisId:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SKRRemoteConversationXPC> *, void*
- (void)startTurnWithTurnData:(void *)arg1 bridge:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: SKRConversationTurnDataXPC *, <SKRServiceBridge> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
