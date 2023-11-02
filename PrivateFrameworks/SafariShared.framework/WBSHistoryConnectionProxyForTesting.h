
@interface WBSHistoryConnectionProxyForTesting : WBSHistoryConnectionProxy {
    NSXPCListenerEndpoint * _listenerEndpoint;
}

- (void).cxx_destruct;
- (id)_createConnection;
- (id)initWithListenerEndpoint:(id)arg1;

@end
