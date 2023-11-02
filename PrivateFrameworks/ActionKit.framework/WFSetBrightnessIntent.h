
@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (nonatomic, readonly) Class settingsClientClass;
@property (nonatomic, copy) NSNumber *value;
@property (nonatomic, retain) NSNumber *value;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)settingsClientClass;

@end
