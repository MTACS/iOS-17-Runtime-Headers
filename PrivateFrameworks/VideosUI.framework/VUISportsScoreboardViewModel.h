
@interface VUISportsScoreboardViewModel : NSObject {
    NSString * _canonicalId;
    bool  _configureScoreUpdates;
    NSDictionary * _contentMetadata;
    NSDictionary * _dictionaryRepresentation;
    bool  _isVersus;
    NSDate * _lastUpdatedTime;
    NSDictionary * _leagueContext;
    NSString * _leagueId;
    NSArray * _scores;
    bool  _showScoreboard;
}

@property (nonatomic, readonly) NSString *canonicalId;
@property (nonatomic) bool configureScoreUpdates;
@property (nonatomic, readonly) NSDictionary *contentMetadata;
@property (nonatomic, readonly) bool isVersus;
@property (nonatomic, readonly) NSDate *lastUpdatedTime;
@property (nonatomic, readonly) NSDictionary *leagueContext;
@property (nonatomic, readonly) NSString *leagueId;
@property (nonatomic, readonly) NSArray *scores;
@property (nonatomic, readonly) bool showScoreboard;

- (void).cxx_destruct;
- (id)canonicalId;
- (bool)configureScoreUpdates;
- (id)contentMetadata;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isVersus;
- (id)jsContextDictionary;
- (id)lastUpdatedTime;
- (id)leagueContext;
- (id)leagueId;
- (void)removeUnicodeFromScoreValuesIfNeeded;
- (id)scores;
- (void)setConfigureScoreUpdates:(bool)arg1;
- (bool)showScoreboard;

@end
