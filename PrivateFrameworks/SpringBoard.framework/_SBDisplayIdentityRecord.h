
@interface _SBDisplayIdentityRecord : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    bool  _connectedAtInit;
    FBSDisplayIdentity * _displayIdentity;
    BSAtomicSignal * _invalidationSignal;
}

@property (getter=didConnectAtInit, nonatomic, readonly) bool connectedAtInit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)didConnectAtInit;
- (id)displayIdentity;
- (id)initWithIdentity:(id)arg1 connectedAtInit:(bool)arg2;
- (void)invalidate;
- (bool)isValid;

@end
