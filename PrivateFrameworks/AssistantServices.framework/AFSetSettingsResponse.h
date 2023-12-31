
@interface AFSetSettingsResponse : AFSiriResponse {
    NSArray * _settingChanges;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 settingChanges:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)settingChanges;

@end
