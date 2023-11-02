
@interface _HMMediaProfile : _HMAccessoryProfile {
    unsigned long long  _capability;
    <_HMMediaProfileDelegate> * _delegate;
    HMMediaSession * _mediaSession;
    NSString * _routeUID;
}

@property (nonatomic) unsigned long long capability;
@property <_HMMediaProfileDelegate> *delegate;
@property (retain) HMMediaSession *mediaSession;
@property (readonly) NSString *routeUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (unsigned long long)capability;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mediaSession;
- (id)routeUID;
- (void)setCapability:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setRouteUID:(id)arg1;

@end
