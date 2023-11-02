
@interface MRPresentRouteAuthorizationStatusMessage : MRProtocolMessage {
    MRAVOutputDevice * _route;
}

@property (nonatomic, readonly) MRAVOutputDevice *route;
@property (nonatomic, readonly) int status;

- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 status:(int)arg2;
- (id)route;
- (int)status;
- (unsigned long long)type;

@end
