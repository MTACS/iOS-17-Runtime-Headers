
@interface FBSSettingsExtension : NSObject

+ (id)alloc;
+ (id)descriptionOfValue:(id)arg1 forSetting:(id)arg2;
+ (Class)extensionForProtocol:(id)arg1;
+ (bool)isPrivacySensitiveSetting:(id)arg1;
+ (bool)isVolatileSetting:(id)arg1;
+ (id)protocol;
+ (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
+ (id)valueForUndefinedSetting:(id)arg1;

@end
