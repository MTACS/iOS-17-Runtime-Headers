
@interface HMBooleanSetting : HMImmutableSetting {
    bool  _boolValue;
}

@property (readonly) bool boolValue;

- (id)attributeDescriptions;
- (bool)boolValue;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 boolValue:(bool)arg3;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)arg1;

@end
