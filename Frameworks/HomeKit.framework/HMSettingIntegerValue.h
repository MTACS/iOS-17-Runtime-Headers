
@interface HMSettingIntegerValue : HMImmutableSettingValue {
    long long  _integerValue;
}

@property (readonly) long long integerValue;

- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithIntegerValue:(long long)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)protoPayload;

@end
