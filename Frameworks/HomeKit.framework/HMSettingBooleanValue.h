
@interface HMSettingBooleanValue : HMImmutableSettingValue {
    bool  _boolValue;
}

@property (readonly) bool boolValue;

- (id)attributeDescriptions;
- (bool)boolValue;
- (unsigned long long)hash;
- (id)initWithBoolValue:(bool)arg1;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)protoPayload;

@end
