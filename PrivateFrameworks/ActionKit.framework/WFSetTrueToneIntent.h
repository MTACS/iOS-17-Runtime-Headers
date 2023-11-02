
@interface WFSetTrueToneIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic) long long operation;
@property (nonatomic, readonly) Class settingsClientClass;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic, copy) NSNumber *state;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)settingsClientClass;

@end
