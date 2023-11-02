
@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic, retain) NSString *appleMediaAccessoryChangeTag;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSUUID *idsIdentifier;
@property (nonatomic, retain) NSData *loggedInAccount;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSNumber *productColor;
@property (nonatomic, retain) HMFSoftwareVersion *softwareVersion;
@property (nonatomic, retain) NSNumber *supportedStereoPairVersions;
@property (nonatomic, retain) HMFWiFiNetworkInfo *wifiNetworkInfo;

+ (id)appleMediaAccessoryModelWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
+ (id)homePodAccessoryModelWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
+ (id)properties;

- (id)_initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;

@end
