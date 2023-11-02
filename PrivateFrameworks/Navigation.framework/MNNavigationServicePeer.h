
@interface MNNavigationServicePeer : GEONavdPeer {
    NSString * _peerIdentifier;
    int  _processIdentifier;
}

@property (nonatomic, readonly) NSString *peerIdentifier;
@property (nonatomic, readonly) int processIdentifier;

- (void).cxx_destruct;
- (id)auditToken;
- (void)clearConnection;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (bool)isEntitled;
- (id)peerIdentifier;
- (int)processIdentifier;

@end
