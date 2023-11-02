
@interface DBInstrumentClusterURLHandler : NSObject

+ (unsigned long long)_clusterSettingForURLValue:(id)arg1;
+ (id)_correctedComponentsForURL:(id)arg1;
+ (bool)_isMapsClusterURL:(id)arg1;
+ (unsigned long long)_layoutSettingForURLValue:(id)arg1;
+ (void)applySettingsForClusterURL:(id)arg1 toSceneSettings:(id)arg2;
+ (bool)isURLSupported:(id)arg1;

@end
