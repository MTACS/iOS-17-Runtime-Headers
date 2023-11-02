
@interface HMBoundedIntegerSetting : HMImmutableSetting {
    long long  _integerValue;
    long long  _maxValue;
    long long  _minValue;
    long long  _valueStepSize;
}

@property (readonly) long long integerValue;
@property (readonly) long long maxValue;
@property (readonly) long long minValue;
@property (readonly) long long valueStepSize;

- (id)attributeDescriptions;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 integerValue:(long long)arg3 maxValue:(long long)arg4 minValue:(long long)arg5 valueStepSize:(long long)arg6;
- (id)initWithKeyPath:(id)arg1 readOnly:(bool)arg2 payload:(id)arg3;
- (id)initWithProtoPayload:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (long long)maxValue;
- (long long)minValue;
- (id)payloadCopy;
- (id)protoPayload;
- (id)settingValue;
- (id)settingWithSettingValue:(id)arg1;
- (long long)valueStepSize;

@end
