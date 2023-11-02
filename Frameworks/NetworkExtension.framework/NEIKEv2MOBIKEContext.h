
@interface NEIKEv2MOBIKEContext : NEIKEv2RequestContext {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _invalidateTransport;
    unsigned int  _maxRetries;
    NWEndpoint * _mobikeEndpoint;
    NSString * _mobikeInterface;
    unsigned long long  _retryIntervalInMilliseconds;
}

- (void).cxx_destruct;
- (id)description;

@end
