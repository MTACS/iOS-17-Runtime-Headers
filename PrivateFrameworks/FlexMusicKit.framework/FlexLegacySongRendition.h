
@interface FlexLegacySongRendition : FMSongRendition {
    long long  _durationOfFullOutro;
    long long  _durationOfUsedOutro;
    NSArray * _segments;
}

@property (nonatomic) long long durationOfFullOutro;
@property (nonatomic) long long durationOfUsedOutro;
@property (nonatomic, retain) NSArray *segments;

+ (long long)_durationOfOutroForPlaylist:(id)arg1 onlyUsedDuration:(bool)arg2;

- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (void)_buildTracksFromSegments:(id)arg1;
- (long long)durationOfFullOutro;
- (long long)durationOfUsedOutro;
- (id)initWithSong:(id)arg1 segments:(id)arg2 withOptions:(id)arg3;
- (id)segments;
- (void)setDurationOfFullOutro:(long long)arg1;
- (void)setDurationOfUsedOutro:(long long)arg1;
- (void)setSegments:(id)arg1;

@end
