
@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMDAccessoryAssociation, HMFLogging> {
    NSString * _manufacturer;
    NSString * _model;
    HMFPairingIdentity * _pairingIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) Class superclass;
@property (readonly) bool supportsAssociation;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (void)associateToHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)manufacturer;
- (id)model;
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (id)pairingIdentity;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setPairingIdentity:(id)arg1;
- (bool)supportsAssociation;

@end
