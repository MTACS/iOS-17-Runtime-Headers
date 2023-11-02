
@interface MRPromptForRouteAuthorizationMessage : MRProtocolMessage {
    MRAVOutputDevice * _route;
}

@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly) MRAVOutputDevice *route;

- (void).cxx_destruct;
- (id)initWithRoute:(id)arg1 inputType:(long long)arg2;
- (long long)inputType;
- (id)route;
- (unsigned long long)type;

@end
