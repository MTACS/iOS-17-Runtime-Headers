
@interface SVXClientKeepAliveService : NSObject <SVXClientKeepAliveServicing, SVXClientServiceConsuming> {
    <SVXClientServiceProviding> * _clientServiceProvider;
    <SVXPerforming> * _performer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectWithRetryCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)clientServiceDidChange:(bool)arg1;
- (void)connectWithCompletion:(id /* block */)arg1;
- (id)initWithClientServiceProvider:(id)arg1 analytics:(id)arg2 performer:(id)arg3;

@end
