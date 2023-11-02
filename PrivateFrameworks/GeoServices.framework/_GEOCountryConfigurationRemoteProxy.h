
@interface _GEOCountryConfigurationRemoteProxy : NSObject <GEOConfigChangeListenerDelegate, _GEOCountryConfigurationServerProxy> {
    int  _countryCodeChangedToken;
    <_GEOCountryConfigurationServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _providersChangedToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end
