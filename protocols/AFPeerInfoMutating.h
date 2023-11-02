
@protocol AFPeerInfoMutating <NSObject>

@required

- (void)setAceVersion:(NSString *)arg1;
- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setBuildVersion:(NSString *)arg1;
- (void)setHomeKitAccessoryIdentifier:(NSString *)arg1;
- (void)setIdsDeviceUniqueIdentifier:(NSString *)arg1;
- (void)setIdsIdentifier:(NSString *)arg1;
- (void)setIsCommunalDevice:(bool)arg1;
- (void)setIsDeviceOwnedByCurrentUser:(bool)arg1;
- (void)setIsLocationSharingDevice:(bool)arg1;
- (void)setIsSiriCloudSyncEnabled:(bool)arg1;
- (void)setMediaRouteIdentifier:(NSString *)arg1;
- (void)setMediaSystemIdentifier:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setProductType:(NSString *)arg1;
- (void)setRapportEffectiveIdentifier:(NSString *)arg1;
- (void)setRoomName:(NSString *)arg1;
- (void)setSharedUserIdentifier:(NSString *)arg1;
- (void)setUserInterfaceIdiom:(NSString *)arg1;

@end
