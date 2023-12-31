
@interface AFGetSettingsResponse : AFSiriResponse {
    NSArray * _settings;
}

@property (nonatomic, copy) NSArray *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;

@end
