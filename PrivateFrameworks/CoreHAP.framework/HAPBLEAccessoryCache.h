
@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding> {
    NSMutableArray * _cachedServices;
    long long  _discoveryVersion;
    NSNumber * _lastKeyBagIdentityIndexFailingPV;
    NSNumber * _metadataVersion;
    NSString * _pairingIdentifier;
    HAPBLEPeripheralInfo * _peripheralInfo;
    id /* block */  _saveBlock;
}

@property (nonatomic, readonly) NSMutableArray *cachedServices;
@property (nonatomic) long long discoveryVersion;
@property (nonatomic, retain) NSNumber *lastKeyBagIdentityIndexFailingPV;
@property (nonatomic, readonly) NSNumber *metadataVersion;
@property (nonatomic, readonly) NSString *pairingIdentifier;
@property (nonatomic, retain) HAPBLEPeripheralInfo *peripheralInfo;
@property (nonatomic, copy) id /* block */ saveBlock;

+ (long long)currentDiscoveryVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedServices;
- (id)description;
- (long long)discoveryVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)getCachedServiceWithUUID:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastKeyBagIdentityIndexFailingPV;
- (id)metadataVersion;
- (id)pairingIdentifier;
- (id)peripheralInfo;
- (void)save;
- (id /* block */)saveBlock;
- (void)setDiscoveryVersion:(long long)arg1;
- (void)setLastKeyBagIdentityIndexFailingPV:(id)arg1;
- (void)setPeripheralInfo:(id)arg1;
- (void)setSaveBlock:(id /* block */)arg1;
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)arg1;
- (void)updateWithPeripheralInfo:(id)arg1;
- (void)updateWithSaveBlock:(id /* block */)arg1;
- (void)updateWithService:(id)arg1;

@end
