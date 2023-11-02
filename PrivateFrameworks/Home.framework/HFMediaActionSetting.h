
@interface HFMediaActionSetting : NSObject {
    HFMediaPlaybackActionBuilder * _mediaActionBuilder;
    long long  _originalHMNonPausePlaybackState;
    HFPlaybackArchive * _playbackArchive;
}

@property (nonatomic, readonly) HFMediaPlaybackActionBuilder *mediaActionBuilder;
@property (nonatomic) long long originalHMNonPausePlaybackState;
@property (nonatomic, retain) HFPlaybackArchive *playbackArchive;

- (void).cxx_destruct;
- (id)initWithActionBuilder:(id)arg1;
- (id)mediaActionBuilder;
- (long long)originalHMNonPausePlaybackState;
- (id)playbackArchive;
- (void)setOriginalHMNonPausePlaybackState:(long long)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)updatePlaybackState:(long long)arg1;

@end
