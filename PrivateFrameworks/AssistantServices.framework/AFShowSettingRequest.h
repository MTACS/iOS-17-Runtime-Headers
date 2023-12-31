
@interface AFShowSettingRequest : AFSiriRequest {
    long long  _settingType;
}

+ (bool)supportsSecureCoding;

- (id)_initWithSettingType:(long long)arg1;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)settingType;

@end
