
@interface HFSymptomResultContextProvider : NSObject <HFSymptomResultContextProviding> {
    HMAccessory * _accessory;
    HMMediaSystem * _mediaSystem;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *accessoryCategory;
@property (nonatomic, readonly, copy) NSString *accessoryName;
@property (nonatomic, readonly, copy) NSString *accessoryNetworkSSID;
@property (nonatomic, readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSString *currentAppleMusicAccountName;
@property (nonatomic, readonly, copy) NSString *currentDeviceNetworkSSID;
@property (nonatomic, readonly, copy) NSString *currentUserID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *detailedErrorDescriptionForiCloudSymptom;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeKitObjectName;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryCategory;
- (id)accessoryName;
- (id)accessoryNetworkSSID;
- (id)accessoryUUID;
- (id)currentAppleMusicAccountName;
- (id)currentDeviceNetworkSSID;
- (id)currentUserID;
- (id)detailedErrorDescriptionForiCloudSymptom;
- (long long)fixStateForSymptom:(id)arg1;
- (id)homeKitObjectName;
- (id)init;
- (id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2;
- (id)mediaSystem;
- (bool)shouldDisplayManualFixOptionForSymptom:(id)arg1;

@end
