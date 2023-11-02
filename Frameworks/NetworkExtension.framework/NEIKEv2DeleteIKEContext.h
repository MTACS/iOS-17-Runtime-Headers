
@interface NEIKEv2DeleteIKEContext : NEIKEv2RequestContext {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _responseNeeded;
}

- (void).cxx_destruct;
- (id)description;
- (void)sendCallbackSuccess:(bool)arg1 session:(id)arg2;

@end
