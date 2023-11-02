
@interface HMSettingStringValue : HMImmutableSettingValue {
    NSString * _stringValue;
}

@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithPayload:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithStringValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)protoPayload;
- (id)stringValue;

@end
