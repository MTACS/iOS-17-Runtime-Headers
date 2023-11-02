
@interface MSVLyricsSongInfo : NSObject {
    NSArray * _agents;
    NSString * _language;
    double  _leadingSilence;
    NSString * _lyricGenId;
    NSArray * _lyricsLines;
    NSArray * _lyricsSections;
    double  _songDuration;
    NSArray * _songwriters;
    NSDictionary * _translationsMap;
    long long  _type;
}

@property (nonatomic, retain) NSArray *agents;
@property (nonatomic, readonly) NSArray *availableTranslations;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) double leadingSilence;
@property (nonatomic, copy) NSString *lyricGenId;
@property (nonatomic, retain) NSArray *lyricsLines;
@property (nonatomic, retain) NSArray *lyricsSections;
@property (nonatomic) double songDuration;
@property (nonatomic, retain) NSArray *songwriters;
@property (nonatomic, retain) NSDictionary *translationsMap;
@property (nonatomic) long long type;

+ (id)_descriptionForLyricsInfoType:(long long)arg1;
+ (id)_elementsInArray:(id)arg1 atTimeOffset:(double)arg2 errorMargin:(double)arg3;

- (void).cxx_destruct;
- (id)_sortLyricsLinesByStartTime:(id)arg1;
- (id)agents;
- (id)availableTranslations;
- (id)description;
- (id)init;
- (id)language;
- (double)leadingSilence;
- (id)lyricGenId;
- (id)lyricsLineStartingBeforeTimeOffset:(double)arg1;
- (id)lyricsLines;
- (id)lyricsLinesAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (id)lyricsSections;
- (id)lyricsWordsAtTimeOffset:(double)arg1 errorMargin:(double)arg2;
- (void)setAgents:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLeadingSilence:(double)arg1;
- (void)setLyricGenId:(id)arg1;
- (void)setLyricsLines:(id)arg1;
- (void)setLyricsLinesSortedByStartTime:(id)arg1;
- (void)setLyricsSections:(id)arg1;
- (void)setSongDuration:(double)arg1;
- (void)setSongwriters:(id)arg1;
- (void)setTranslationsMap:(id)arg1;
- (void)setType:(long long)arg1;
- (double)songDuration;
- (id)songwriters;
- (id)translatedTextForLyricsLine:(id)arg1 language:(id)arg2;
- (id)translationsMap;
- (long long)type;

@end
