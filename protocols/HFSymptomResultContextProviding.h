
@protocol HFSymptomResultContextProviding <NSObject>

@required

- (NSString *)accessoryCategory;
- (NSString *)accessoryName;
- (NSString *)accessoryNetworkSSID;
- (NSUUID *)accessoryUUID;
- (NSString *)currentAppleMusicAccountName;
- (NSString *)currentDeviceNetworkSSID;
- (NSString *)currentUserID;
- (NSString *)detailedErrorDescriptionForiCloudSymptom;
- (long long)fixStateForSymptom:(HMSymptom *)arg1;
- (NSString *)homeKitObjectName;
- (bool)shouldDisplayManualFixOptionForSymptom:(HMSymptom *)arg1;

@end
