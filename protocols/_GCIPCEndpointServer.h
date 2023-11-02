
@protocol _GCIPCEndpointServer <_GCIPCEndpoint>

@required

- (bool)acceptClient:(id <_GCIPCRemoteEndpointInterface>)arg1 onConnection:(id <_GCIPCEndpointConnection>)arg2 error:(id*)arg3;

@end
