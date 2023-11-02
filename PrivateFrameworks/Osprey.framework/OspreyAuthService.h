
@interface OspreyAuthService : NSObject {
    unsigned long long  _authStrategyVersion;
    NSUUID * _authUUID;
    OspreyGRPCChannel * _channel;
}

- (void).cxx_destruct;
- (void)certificateDataWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)createClientSessionWithData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)initWithChannel:(id)arg1 authStrategyVersion:(unsigned long long)arg2;

@end
