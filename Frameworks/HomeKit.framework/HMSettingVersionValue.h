
@interface HMSettingVersionValue : HMImmutableSettingValue {
    long long  _type;
    HMFVersion * _version;
}

@property (readonly) long long type;
@property (readonly) HMFVersion *version;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithPayload:(id)arg1;
- (id)initWithVersion:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (long long)type;
- (id)version;

@end
