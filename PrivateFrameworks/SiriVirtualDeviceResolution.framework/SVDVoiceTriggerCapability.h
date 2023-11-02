
@interface SVDVoiceTriggerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution22VoiceTriggerCapability * _backing;
}

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_swiftBacking;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1;
- (long long)supportsVoiceTrigger;

@end
