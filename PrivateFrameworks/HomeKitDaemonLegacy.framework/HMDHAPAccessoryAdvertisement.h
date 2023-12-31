
@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement {
    bool  _pairingPresent;
    NSData * _setupHash;
}

@property (nonatomic, readonly) bool pairingPresent;
@property (nonatomic, retain) NSData *setupHash;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 categoryIdentifier:(id)arg3 pairingPresent:(bool)arg4 setupHash:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)pairingPresent;
- (void)setSetupHash:(id)arg1;
- (id)setupHash;

@end
