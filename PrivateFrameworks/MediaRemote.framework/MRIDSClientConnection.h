
@interface MRIDSClientConnection : MRProtocolClientConnection {
    unsigned int  _discoveryMode;
}

@property (nonatomic) unsigned int discoveryMode;

- (unsigned int)discoveryMode;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (void)setDiscoveryMode:(unsigned int)arg1;

@end
