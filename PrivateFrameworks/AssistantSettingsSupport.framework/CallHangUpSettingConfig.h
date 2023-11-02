
@interface CallHangUpSettingConfig : NSObject <AssistantSiriInCallControllerConfig>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)enabled;
+ (id)localizationKey;
+ (void)setEnabled:(bool)arg1;
+ (bool)supported;

@end
