
@interface SiriVirtualDeviceResolution.SpeakerCapability : NSObject <NSSecureCoding, SiriVirtualDeviceResolution.CapabilityMatching> {
    void key;
    void primitivesMap;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long qualityScore;
@property (nonatomic, readonly) long long supportStatus;

+ (id)capabilityDescriptionMatchingQualityScoreRangeWithLowerBound:(long long)arg1 upperBound:(long long)arg2;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 qualityScore:(long long)arg2;
- (id)key;
- (bool)matchesWithDescriptions:(id)arg1;
- (long long)qualityScore;
- (void)setKey:(id)arg1;
- (long long)supportStatus;

@end
