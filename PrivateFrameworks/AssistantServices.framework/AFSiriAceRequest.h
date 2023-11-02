
@interface AFSiriAceRequest : NSObject <AFSiriExternalRequest> {
    unsigned long long  _requestOptions;
    NSObject<OS_xpc_object> * _startLocalRequestData;
    NSObject<OS_xpc_object> * _startRequestData;
}

- (void).cxx_destruct;
- (id)initWithStartLocalRequest:(id)arg1 requestOptions:(unsigned long long)arg2;
- (id)initWithStartRequest:(id)arg1;
- (id)initWithStartRequest:(id)arg1 requestOptions:(unsigned long long)arg2;
- (void)performRequestWithCompletion:(id /* block */)arg1;

@end
