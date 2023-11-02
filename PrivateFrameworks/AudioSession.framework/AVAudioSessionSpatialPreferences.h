
@interface AVAudioSessionSpatialPreferences : NSObject <NSSecureCoding> {
    bool  alwaysSpatialize;
    long long  maximumSpatializableChannels;
    bool  prefersHeadTrackedSpatialization;
    bool  prefersLossyAudioSources;
    NSArray * spatialAudioSources;
}

@property (nonatomic) bool alwaysSpatialize;
@property (nonatomic) long long maximumSpatializableChannels;
@property (nonatomic) bool prefersHeadTrackedSpatialization;
@property (nonatomic) bool prefersLossyAudioSources;
@property (nonatomic, retain) NSArray *spatialAudioSources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysSpatialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)maximumSpatializableChannels;
- (bool)prefersHeadTrackedSpatialization;
- (bool)prefersLossyAudioSources;
- (void)setAlwaysSpatialize:(bool)arg1;
- (void)setMaximumSpatializableChannels:(long long)arg1;
- (void)setPrefersHeadTrackedSpatialization:(bool)arg1;
- (void)setPrefersLossyAudioSources:(bool)arg1;
- (void)setSpatialAudioSources:(id)arg1;
- (id)spatialAudioSources;

@end
