
@interface HMImmutableStringSetting : HMImmutableSetting {
    NSString * _stringValue;
}

@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 stringValue:(id)arg3;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)arg1;
- (id)stringValue;

@end
