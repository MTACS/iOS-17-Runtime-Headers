
@interface TRServerConnection : TRConnection {
    SFService * _service;
}

@property (nonatomic) SFService *service;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (void)invalidate;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;

@end
