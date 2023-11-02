
@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (getter=isConnectedWirelessly, nonatomic) bool connectedWirelessly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeoSupported, nonatomic) bool geoSupported;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suspensionReasons;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isConnectedWirelessly;
- (bool)isGeoSupported;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)openServiceEndpoint;
- (void)setConnectedWirelessly:(bool)arg1;
- (void)setGeoSupported:(bool)arg1;
- (void)setOpenServiceEndpoint:(id)arg1;
- (void)setSuspensionReasons:(unsigned long long)arg1;
- (unsigned long long)suspensionReasons;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
