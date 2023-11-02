
@interface SNAudioConfiguration : NSObject <NSCopying, NSSecureCoding> {
    void impl;
}

@property (nonatomic, readonly) bool allowHapticsAndSystemSoundsDuringRecording;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) bool prefersNoInterruptions;
@property (nonatomic) bool prefersNoMicrophoneUsageIndicator;
@property (nonatomic) bool useSiriAudioRouting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowHapticsAndSystemSoundsDuringRecording;
- (id)category;
- (id)channelMap;
- (id)copyWithZone:(void*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mode;
- (unsigned long long)options;
- (bool)prefersNoInterruptions;
- (bool)prefersNoMicrophoneUsageIndicator;
- (void)setCategory:(id)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPrefersNoMicrophoneUsageIndicator:(bool)arg1;
- (void)setUseSiriAudioRouting:(bool)arg1;
- (bool)useSiriAudioRouting;

@end
