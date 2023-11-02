
@interface MODeviceActivitySettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSSet *allowedClients;
@property (nonatomic, retain) NSNumber *shareAcrossDevices;
@property (nonatomic, retain) NSSet *sharingAppleIDs;

+ (id)allowedClientsMetadata;
+ (id)groupName;
+ (id)shareAcrossDevicesMetadata;
+ (id)sharingAppleIDsMetadata;

- (id)allowedClients;
- (void)setAllowedClients:(id)arg1;
- (void)setShareAcrossDevices:(id)arg1;
- (void)setSharingAppleIDs:(id)arg1;
- (id)shareAcrossDevices;
- (id)sharingAppleIDs;

@end
