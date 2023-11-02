
@interface FlexMLSongRendition : FMSongRendition {
    FlexMLSummary * _summary;
}

@property (nonatomic, retain) FlexMLSummary *summary;

- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (void)_buildTracks;
- (void)_calculateDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithSong:(id)arg1 options:(id)arg2 andSummary:(id)arg3 forDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
