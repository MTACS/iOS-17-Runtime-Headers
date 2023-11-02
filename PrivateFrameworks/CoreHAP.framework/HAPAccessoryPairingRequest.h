
@interface HAPAccessoryPairingRequest : HMFObject <NSCopying> {
    NSNumber * _chipFabricID;
    bool  _doNetworkScan;
    NSString * _isoCountryCode;
    bool  _ownerPairing;
    NSData * _ownershipToken;
    HAPPairingIdentity * _pairingIdentity;
    NSData * _psk;
    bool  _requiresUserConsent;
    NSString * _ssid;
}

@property (copy) NSNumber *chipFabricID;
@property (nonatomic) bool doNetworkScan;
@property (copy) NSString *isoCountryCode;
@property (getter=isOwnerPairing) bool ownerPairing;
@property (copy) NSData *ownershipToken;
@property (copy) HAPPairingIdentity *pairingIdentity;
@property (copy) NSData *psk;
@property bool requiresUserConsent;
@property (copy) NSString *ssid;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)chipFabricID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)doNetworkScan;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isOwnerPairing;
- (id)isoCountryCode;
- (id)ownershipToken;
- (id)pairingIdentity;
- (id)psk;
- (bool)requiresUserConsent;
- (void)setChipFabricID:(id)arg1;
- (void)setDoNetworkScan:(bool)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setOwnerPairing:(bool)arg1;
- (void)setOwnershipToken:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (void)setPsk:(id)arg1;
- (void)setRequiresUserConsent:(bool)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
