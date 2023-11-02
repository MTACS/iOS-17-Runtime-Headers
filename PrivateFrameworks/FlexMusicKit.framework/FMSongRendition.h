
@interface FMSongRendition : NSObject {
    long long  _duration;
    long long  _durationOfMusic;
    long long  _durationOfSilence;
    NSDictionary * _options;
    NSObject<FlexSongProtocol> * _song;
    FMTrack * _trackA;
    FMTrack * _trackB;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long durationOfMusic;
@property (nonatomic) long long durationOfSilence;
@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, retain) NSObject<FlexSongProtocol> *song;
@property (nonatomic, retain) FMTrack *trackA;
@property (nonatomic, retain) FMTrack *trackB;

+ (id)coalesceMixParamsA:(id)arg1 withMixParamsB:(id)arg2;

- (void).cxx_destruct;
- (id)_buildOutroFadeoutMixParams;
- (double)_maxPeakAndLoudness:(double*)arg1 missingPeakValueCount:(int*)arg2 missingLoudnessCount:(int*)arg3;
- (id)avCompositionWithAudioMix:(id*)arg1 includeShortenedOutroFadeOut:(bool)arg2;
- (id)description;
- (long long)duration;
- (long long)durationOfMusic;
- (long long)durationOfSilence;
- (id)initWithSong:(id)arg1 andOptions:(id)arg2;
- (id)options;
- (void)setDuration:(long long)arg1;
- (void)setDurationOfMusic:(long long)arg1;
- (void)setDurationOfSilence:(long long)arg1;
- (void)setSong:(id)arg1;
- (void)setTrackA:(id)arg1;
- (void)setTrackB:(id)arg1;
- (id)song;
- (id)timedMetadataItemsWithIdentifier:(id)arg1;
- (id)trackA;
- (id)trackB;

@end
