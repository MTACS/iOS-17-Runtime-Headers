
@interface MPNowPlayingInfoAudioRoute : NSObject {
    MRContentItemMetadataAudioRoute * _mediaRemoteAudioRoute;
}

@property (nonatomic, readonly) MRContentItemMetadataAudioRoute *mediaRemoteAudioRoute;
@property (nonatomic, copy) NSString *name;
@property (getter=isSpatializationEnabled, nonatomic) bool spatializationEnabled;
@property (nonatomic) bool supportsSpatialization;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithMediaRemoteAudioRoute:(id)arg1;
- (bool)isSpatializationEnabled;
- (id)mediaRemoteAudioRoute;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSpatializationEnabled:(bool)arg1;
- (void)setSupportsSpatialization:(bool)arg1;
- (void)setType:(long long)arg1;
- (bool)supportsSpatialization;
- (long long)type;

@end
