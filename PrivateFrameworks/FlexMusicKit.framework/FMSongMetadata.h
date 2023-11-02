
@interface FMSongMetadata : NSObject {
    double  _arousal;
    NSString * _artistName;
    NSSet * _genres;
    bool  _hidden;
    NSSet * _keywords;
    NSString * _mood;
    NSString * _moodAlt;
    NSString * _pace;
    bool  _recalled;
    NSSet * _regions;
    NSString * _songName;
    long long  _style;
    double  _valence;
    double  _visualTempo;
    NSDictionary * _weightedKeywords;
}

@property (nonatomic) double arousal;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSSet *genres;
@property (nonatomic) bool hidden;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSString *mood;
@property (nonatomic, copy) NSString *moodAlt;
@property (nonatomic, copy) NSString *pace;
@property (nonatomic) bool recalled;
@property (nonatomic, copy) NSSet *regions;
@property (nonatomic, copy) NSString *songName;
@property (nonatomic) long long style;
@property (nonatomic) double valence;
@property (nonatomic) double visualTempo;
@property (nonatomic, copy) NSDictionary *weightedKeywords;

- (void).cxx_destruct;
- (double)arousal;
- (id)artistName;
- (id)genres;
- (bool)hidden;
- (id)init;
- (id)keywords;
- (id)mood;
- (id)moodAlt;
- (id)pace;
- (bool)recalled;
- (id)regions;
- (void)setArousal:(double)arg1;
- (void)setArtistName:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setKeywords:(id)arg1;
- (void)setMood:(id)arg1;
- (void)setMoodAlt:(id)arg1;
- (void)setPace:(id)arg1;
- (void)setRecalled:(bool)arg1;
- (void)setRegions:(id)arg1;
- (void)setSongName:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setValence:(double)arg1;
- (void)setVisualTempo:(double)arg1;
- (void)setWeightedKeywords:(id)arg1;
- (id)songName;
- (long long)style;
- (double)valence;
- (double)visualTempo;
- (id)weightedKeywords;

@end
