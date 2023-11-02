
@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate> {
    CATTransport * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CATTransport *transport;

- (void).cxx_destruct;
- (id)initWithTransport:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (id)transport;
- (void)transportDidInvalidate:(id)arg1;

@end
