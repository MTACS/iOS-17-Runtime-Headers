
@interface MPNowPlayingInfoAudioFormat : NSObject <NSSecureCoding> {
    MRContentItemMetadataAudioFormat * _mediaRemoteAudioFormat;
}

@property (nonatomic, retain) NSString *audioChannelLayoutDescription;
@property (nonatomic, readonly) long long badging;
@property (nonatomic) long long bitDepth;
@property (nonatomic) long long bitrate;
@property (nonatomic) unsigned int channelLayout;
@property (nonatomic) unsigned int codec;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, readonly) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat;
@property (getter=isMultiChannel, nonatomic) bool multiChannel;
@property (nonatomic) long long sampleRate;
@property (getter=isSpatialized, nonatomic) bool spatialized;
@property (nonatomic, copy) NSString *stableVariantID;
@property (nonatomic) long long tier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForChannelLayoutTag:(unsigned int)arg1;
- (id)audioChannelLayoutDescription;
- (long long)badging;
- (long long)bitDepth;
- (long long)bitrate;
- (unsigned int)channelLayout;
- (unsigned int)codec;
- (id)debugBitDepthDescription;
- (id)debugBitRateDescription;
- (id)debugChannelCountDescription;
- (id)debugChannelLayoutDescription;
- (id)debugCodecDescription;
- (id)debugSampleRateDescription;
- (id)debugTierDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaRemoteAudioFormat:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMultiChannel;
- (bool)isSpatialized;
- (id)mediaRemoteAudioFormat;
- (long long)sampleRate;
- (void)setAudioChannelLayoutDescription:(id)arg1;
- (void)setBitDepth:(long long)arg1;
- (void)setBitrate:(long long)arg1;
- (void)setChannelLayout:(unsigned int)arg1;
- (void)setCodec:(unsigned int)arg1;
- (void)setGroupID:(id)arg1;
- (void)setMultiChannel:(bool)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setSpatialized:(bool)arg1;
- (void)setStableVariantID:(id)arg1;
- (void)setTier:(long long)arg1;
- (id)stableVariantID;
- (long long)tier;

@end
