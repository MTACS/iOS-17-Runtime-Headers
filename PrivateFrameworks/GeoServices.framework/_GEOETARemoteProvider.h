
@interface _GEOETARemoteProvider : NSObject {
    GEOXPCConnection * _connection;
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    id /* block */  _networkActivityHandler;
    id /* block */  _willSendRequestHandler;
}

+ (id)provderWithWillSendRequest:(id /* block */)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

- (void).cxx_destruct;

@end
