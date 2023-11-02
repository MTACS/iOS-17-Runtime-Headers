
@interface PSHotspotModeSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)deviceSupportsPersonalHotspot;
+ (struct NETRBClient { }*)getNETRBClient;
+ (id)iconImage;
+ (bool)isDiscoverable;
+ (bool)isEnabled;
+ (id)preferencesURL;
+ (void)setDiscoverable:(bool)arg1;
+ (void)setEnabled:(bool)arg1;

@end
