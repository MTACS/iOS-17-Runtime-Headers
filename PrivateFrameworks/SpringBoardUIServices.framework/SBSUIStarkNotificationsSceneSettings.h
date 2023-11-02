
@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (getter=isConnectedWirelessly, nonatomic, readonly) bool connectedWirelessly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeoSupported, nonatomic, readonly) bool geoSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long suspensionReasons;

- (bool)isConnectedWirelessly;
- (bool)isGeoSupported;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)openServiceEndpoint;
- (unsigned long long)suspensionReasons;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
