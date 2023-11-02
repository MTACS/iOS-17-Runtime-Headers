
@interface VUINowPlayingObservation : NSObject {
    NSString * _nowPlayingAppBundleIdentifier;
    bool  _playing;
}

@property (nonatomic, copy) NSString *nowPlayingAppBundleIdentifier;
@property (getter=isPlaying, nonatomic) bool playing;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 isPlaying:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPlaying;
- (id)nowPlayingAppBundleIdentifier;
- (void)setNowPlayingAppBundleIdentifier:(id)arg1;
- (void)setPlaying:(bool)arg1;

@end
