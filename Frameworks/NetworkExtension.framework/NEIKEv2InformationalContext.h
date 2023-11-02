
@interface NEIKEv2InformationalContext : NEIKEv2RequestContext {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned int  _maxRetries;
    NSArray * _privateNotifies;
    unsigned long long  _retryIntervalInMilliseconds;
}

- (void).cxx_destruct;
- (id)description;
- (void)sendCallbackSuccess:(bool)arg1 session:(id)arg2;

@end
