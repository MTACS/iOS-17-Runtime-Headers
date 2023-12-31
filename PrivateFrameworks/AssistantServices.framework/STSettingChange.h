
@interface STSettingChange : STSiriModelObject {
    long long  _settingType;
    id  _valueAfterUpdate;
    id  _valueBeforeUpdate;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingType:(long long)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3;
- (long long)settingType;
- (id)valueAfterUpdate;
- (id)valueBeforeUpdate;

@end
