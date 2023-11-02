
@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID * _clientID;
    struct _NEFlow { } * _flowDivertFlow;
    NWEndpoint * _internalEndpoint;
    NWParameters * _internalParameters;
}

- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)dealloc;
- (id)endpoint;
- (id)parameters;

@end
