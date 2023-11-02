
@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction {
    HAPAccessory * _hapAccessoryLocal;
}

@property (nonatomic, retain) NSNumber *accessoryFlags;
@property (nonatomic, retain) NSData *accessorySetupHash;
@property (nonatomic, retain) NSString *bridgeUUID;
@property (nonatomic, retain) NSData *broadcastKey;
@property (nonatomic, retain) NSNumber *certificationStatus;
@property (nonatomic, retain) NSData *chipAttributeDatabase;
@property (nonatomic, retain) NSNumber *chipNodeID;
@property (nonatomic, copy) NSSet *chipPairings;
@property (nonatomic, retain) NSData *chipPairingsData;
@property (nonatomic, retain) NSNumber *chipProductID;
@property (nonatomic, retain) NSNumber *chipVendorID;
@property (nonatomic, retain) NSNumber *communicationProtocol;
@property (nonatomic, retain) HMFConnectivityInfo *connectivityInfo;
@property (nonatomic, retain) HAPAccessory *hapAccessoryLocal;
@property (nonatomic, retain) NSNumber *hardwareSupport;
@property (nonatomic, retain) NSNumber *hasOnboardedForNaturalLighting;
@property (nonatomic, copy) NSSet *initialServiceTypeUUIDs;
@property (nonatomic, retain) NSNumber *keyUpdatedStateNumber;
@property (nonatomic, retain) NSDate *keyUpdatedTime;
@property (nonatomic, retain) NSNumber *needsOnboarding;
@property (nonatomic, retain) NSString *pairingUsername;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSNumber *sleepInterval;
@property (nonatomic, retain) NSNumber *suspendedState;
@property (nonatomic, retain) NSArray *targetUUIDs;
@property (nonatomic, retain) NSArray *transportInformation;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSNumber *wiFiTransportCapabilities;

+ (id)properties;

- (void).cxx_destruct;
- (id)chipPairings;
- (id)dependentUUIDs;
- (id)hapAccessoryLocal;
- (void)setChipPairings:(id)arg1;
- (void)setHapAccessoryLocal:(id)arg1;

@end
