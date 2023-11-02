
@interface SiriVirtualDeviceResolution.VideoPlaybackCapability : NSObject <NSSecureCoding, SiriVirtualDeviceResolution.CapabilityMatching> {
    void key;
    void primitivesMap;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, readonly) long long supportsVideoPlayback;

+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1;
- (id)key;
- (bool)matchesWithDescriptions:(id)arg1;
- (void)setKey:(id)arg1;
- (long long)supportsVideoPlayback;

@end
