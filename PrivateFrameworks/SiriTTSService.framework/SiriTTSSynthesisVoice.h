
@interface SiriTTSSynthesisVoice : NSObject <NSSecureCoding> {
    void footprint;
    void gender;
    void language;
    void name;
    void type;
    void version;
}

@property (nonatomic, readonly) NSString *assetKey;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) long long version;

// Image: /System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)footprint;
- (long long)gender;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)name;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)type;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (long long)AFVoiceFootprint;
- (long long)AFVoiceGender;
- (id)SAVoiceGender;
- (id)SAVoiceQuality;
- (id)SAVoiceType;
- (void)updateWithTargetVoice:(id)arg1;

@end
