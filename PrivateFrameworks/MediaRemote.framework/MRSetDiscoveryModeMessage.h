
@interface MRSetDiscoveryModeMessage : MRProtocolMessage {
    MRAVRoutingDiscoverySessionConfiguration * _configuration;
    unsigned int  _mode;
}

@property (nonatomic, readonly) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (nonatomic, readonly) unsigned int mode;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithMode:(unsigned int)arg1 configuration:(id)arg2;
- (id)initWithMode:(unsigned int)arg1 features:(unsigned int)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (unsigned int)mode;
- (unsigned long long)type;

@end
