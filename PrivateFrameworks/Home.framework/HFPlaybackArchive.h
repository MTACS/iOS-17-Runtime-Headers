
@interface HFPlaybackArchive : NSObject {
    bool  _autoPlayEnabled;
    MPPlaybackArchive * _mediaPlayerPlaybackArchive;
}

@property (getter=isAutoPlayEnabled, nonatomic) bool autoPlayEnabled;
@property (nonatomic, readonly) bool isRepeatSupported;
@property (nonatomic, readonly) bool isShuffleSupported;
@property (nonatomic, retain) MPPlaybackArchive *mediaPlayerPlaybackArchive;
@property (getter=isRepeatEnabled, nonatomic) bool repeatEnabled;
@property (getter=isShuffleEnabled, nonatomic) bool shuffleEnabled;
@property (nonatomic) unsigned long long targetOptions;

- (void).cxx_destruct;
- (id)initWithMediaPlayerPlaybackArchive:(id)arg1;
- (bool)isAutoPlayEnabled;
- (bool)isRepeatEnabled;
- (bool)isRepeatSupported;
- (bool)isShuffleEnabled;
- (bool)isShuffleSupported;
- (id)mediaPlayerPlaybackArchive;
- (void)setAutoPlayEnabled:(bool)arg1;
- (void)setMediaPlayerPlaybackArchive:(id)arg1;
- (void)setRepeatEnabled:(bool)arg1;
- (void)setShuffleEnabled:(bool)arg1;
- (void)setTargetOptions:(unsigned long long)arg1;
- (unsigned long long)targetOptions;

@end
