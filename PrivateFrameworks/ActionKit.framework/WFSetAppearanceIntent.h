
@interface WFSetAppearanceIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic) long long operation;
@property (nonatomic, readonly) Class settingsClientClass;
@property (nonatomic, retain) NSNumber *state;
@property (nonatomic) long long style;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)settingsClientClass;
- (id)state;

@end
