
@interface SSErrorHandlerSession : NSObject {
    SSXPCConnection * _controlConnection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSDictionary * _properties;
    long long  _sessionID;
}

- (void)_setControlConnection:(id)arg1;
- (void)_setErrorProperties:(id)arg1;
- (void)_setSessionID:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)performDefaultHandling;
- (void)redirectToURL:(id)arg1;
- (void)retry;
- (id)valueForProperty:(id)arg1;

@end
