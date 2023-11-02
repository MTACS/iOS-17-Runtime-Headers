
@interface VCMediaNegotiatorStreamGroupU1Configuration : NSObject <NSCopying> {
    bool  _allowAudioRecording;
    NSSet * _audioPayloads;
    NSArray * _payloadPreference;
    unsigned int  _screenPixelCount;
    unsigned int  _ssrc;
    NSDictionary * _videoFeatureStrings;
    NSDictionary * _videoFeatureStringsFixedPosition;
    NSArray * _videoParameterSet;
    NSArray * _videoPayloads;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic) bool allowAudioRecording;
@property (nonatomic, retain) NSSet *audioPayloads;
@property (nonatomic, retain) NSArray *payloadPreference;
@property (nonatomic) unsigned int screenPixelCount;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic, retain) NSDictionary *videoFeatureStrings;
@property (nonatomic, retain) NSDictionary *videoFeatureStringsFixedPosition;
@property (nonatomic, retain) NSArray *videoParameterSet;
@property (nonatomic, retain) NSArray *videoPayloads;
@property (nonatomic, retain) VCVideoRuleCollections *videoRuleCollections;

+ (void)negotiateFeatureStrings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (id)negotiatedAudioSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (id)negotiatedCameraSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedMicrophoneSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedScreenSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedSystemAudioSettingsBetweenLocalU1Config:(id)arg1 remoteU1Config:(id)arg2;
+ (id)negotiatedVideoSettingsForGroupID:(unsigned int)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (bool)ssrcForStreamGroup:(unsigned int)arg1 localConfig:(id)arg2 ssrc:(unsigned int*)arg3;
+ (void)updateCameraU1Config:(id)arg1 localConfig:(id)arg2;
+ (bool)updateCommonNegotiatedVideoSettings:(id)arg1 localU1Config:(id)arg2 remoteU1Config:(id)arg3;
+ (void)updateScreenU1Config:(id)arg1 localConfig:(id)arg2;

- (bool)allowAudioRecording;
- (id)audioPayloads;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initStreamGroupU1ConfigForGroupId:(unsigned int)arg1 withLocalConfig:(id)arg2;
- (id)initWithSSRC:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadPreference;
- (unsigned int)screenPixelCount;
- (void)setAllowAudioRecording:(bool)arg1;
- (void)setAudioPayloads:(id)arg1;
- (void)setPayloadPreference:(id)arg1;
- (void)setScreenPixelCount:(unsigned int)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (void)setVideoFeatureStrings:(id)arg1;
- (void)setVideoFeatureStringsFixedPosition:(id)arg1;
- (void)setVideoParameterSet:(id)arg1;
- (void)setVideoPayloads:(id)arg1;
- (void)setVideoRuleCollections:(id)arg1;
- (unsigned int)ssrc;
- (id)videoFeatureStrings;
- (id)videoFeatureStringsFixedPosition;
- (id)videoParameterSet;
- (id)videoPayloads;
- (id)videoRuleCollections;

@end
