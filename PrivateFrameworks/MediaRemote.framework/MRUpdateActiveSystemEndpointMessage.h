
@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage {
    MRUpdateActiveSystemEndpointRequest * _request;
}

@property (nonatomic, readonly) MRUpdateActiveSystemEndpointRequest *request;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)request;
- (unsigned long long)type;

@end
