
@interface AFSetSettingsRequest : AFSiriRequest {
    bool  _applyChanges;
    NSArray * _settings;
}

@property (setter=_setApplyChanges:, nonatomic) bool applyChanges;
@property (setter=_setSettings:, nonatomic, copy) NSArray *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplyChanges:(bool)arg1;
- (void)_setSettings:(id)arg1;
- (bool)applyChanges;
- (id)createResponse;
- (id)createResponseWithSettingChanges:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)settings;

@end