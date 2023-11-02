
@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray * _accessoryServers;
    long long  _certificationStatus;
    long long  _linkType;
    NSData * _setupHash;
}

@property (readonly, copy) NSArray *accessoryServers;
@property (nonatomic) long long certificationStatus;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, readonly) unsigned long long transportTypes;

- (void).cxx_destruct;
- (id)accessoryServers;
- (void)addAccessoryServer:(id)arg1;
- (long long)associationOptions;
- (long long)certificationStatus;
- (id)commissioningID;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (bool)hasBTLELink;
- (bool)hasIPLink;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isKnownToSystemCommissioner;
- (bool)isReachable;
- (long long)linkType;
- (id)nodeID;
- (id)preferredAccessoryServer;
- (id)productID;
- (void)removeAccessoryServer:(id)arg1;
- (id)rootPublicKey;
- (id)serialNumber;
- (void)setCertificationStatus:(long long)arg1;
- (id)setupHash;
- (bool)supportsCHIP;
- (unsigned long long)transportTypes;
- (id)vendorID;

@end
