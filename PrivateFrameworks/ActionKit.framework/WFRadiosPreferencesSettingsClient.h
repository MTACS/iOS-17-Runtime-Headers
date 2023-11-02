
@interface WFRadiosPreferencesSettingsClient : WFSettingsClient {
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic, readonly) RadiosPreferences *radiosPreferences;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)initWithRadiosPreferences:(id)arg1;
- (id)radiosPreferences;

@end
