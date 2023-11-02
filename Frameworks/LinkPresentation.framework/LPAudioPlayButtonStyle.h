
@interface LPAudioPlayButtonStyle : NSObject {
    LPAudioPlayButtonTheme * _appleMusicTheme;
    LPAudioPlayButtonTheme * _audioBookTheme;
    LPAudioPlayButtonTheme * _defaultTheme;
    LPPointUnit * _glyphSize;
    LPAudioPlayButtonTheme * _lyricExcerptTheme;
    LPAudioPlayButtonTheme * _podcastsTheme;
    LPSize * _size;
}

@property (nonatomic, readonly, retain) LPAudioPlayButtonTheme *appleMusicTheme;
@property (nonatomic, readonly, retain) LPAudioPlayButtonTheme *audioBookTheme;
@property (nonatomic, readonly, retain) LPAudioPlayButtonTheme *defaultTheme;
@property (nonatomic, retain) LPPointUnit *glyphSize;
@property (nonatomic, readonly, retain) LPAudioPlayButtonTheme *lyricExcerptTheme;
@property (nonatomic, readonly, retain) LPAudioPlayButtonTheme *podcastsTheme;
@property (nonatomic, retain) LPSize *size;

- (void).cxx_destruct;
- (id)appleMusicTheme;
- (id)audioBookTheme;
- (id)defaultTheme;
- (id)glyphSize;
- (id)initWithPlatform:(long long)arg1;
- (id)lyricExcerptTheme;
- (id)podcastsTheme;
- (void)setGlyphSize:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
