
@interface _EXBDisplayMonitorIdentityRecord : NSObject {
    bool  _connectedAtInit;
    FBSDisplayIdentity * _displayIdentity;
}

@property (getter=didConnectAtInit, nonatomic, readonly) bool connectedAtInit;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;

- (void).cxx_destruct;
- (id)description;
- (bool)didConnectAtInit;
- (id)displayIdentity;
- (id)initWithIdentity:(id)arg1 connectedAtInit:(bool)arg2;

@end
