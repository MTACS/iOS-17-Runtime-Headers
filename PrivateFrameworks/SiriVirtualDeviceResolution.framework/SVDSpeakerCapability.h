
@interface SVDSpeakerCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution17SpeakerCapability * _backing;
}

+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)arg1 upperBound:(long long)arg2;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;
+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_swiftBacking;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 qualityScore:(long long)arg2;
- (long long)qualityScore;
- (long long)supportStatus;

@end
