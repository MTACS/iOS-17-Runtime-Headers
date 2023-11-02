
@interface BMAccessServer : NSObject <BMAccessServer> {
    <BMAccessDelegate> * _delegate;
    BMAccessServiceListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BMAccessDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_createDirectoryAtPath:(id)arg1;
- (bool)_hasDirectoryAtPath:(id)arg1;
- (void)configureConnectionForUseCase:(id)arg1 reply:(id /* block */)arg2;
- (id)delegate;
- (id)initWithListener:(id)arg1;
- (void)requestAccessToResource:(id)arg1 withMode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)requestBiomeEndpoint:(bool)arg1 reply:(id /* block */)arg2;
- (void)requestBiomeEndpointForAppScopedService:(bool)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
