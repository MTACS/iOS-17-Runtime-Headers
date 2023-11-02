
@interface RPBroadcastHostViewController : _UIRemoteViewController {
    RPBroadcastExtensionHostContext * _hostContext;
    NSXPCListenerEndpoint * _listenerEndpoint;
}

@property (nonatomic, retain) RPBroadcastExtensionHostContext *hostContext;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (id)hostContext;
- (id)listenerEndpoint;
- (void)setHostContext:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)updateBroadcastHandlerListenerEndpoint;

@end
