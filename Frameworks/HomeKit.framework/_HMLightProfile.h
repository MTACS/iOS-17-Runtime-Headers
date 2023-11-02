
@interface _HMLightProfile : _HMAccessoryProfile {
    HMLightProfileSettings * _settings;
}

@property (readonly) HMLightProfile *lightProfile;
@property (retain) HMLightProfileSettings *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_registerNotificationHandlers;
- (void)handleSettingsDidUpdate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 services:(id)arg2 settings:(id)arg3;
- (id)lightProfile;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
