
@interface CRKTransportPreflightResultObject : NSObject {
    bool  _shouldResetBackoff;
    CATTransport * _transport;
}

@property (nonatomic, readonly) bool shouldResetBackoff;
@property (nonatomic, retain) CATTransport *transport;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 shouldResetBackoff:(bool)arg2;
- (void)setTransport:(id)arg1;
- (bool)shouldResetBackoff;
- (id)takeTransport;
- (id)transport;

@end
