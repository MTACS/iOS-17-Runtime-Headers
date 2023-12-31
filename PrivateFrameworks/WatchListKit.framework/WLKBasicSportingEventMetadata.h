
@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata {
    NSString * _leagueName;
    NSString * _leagueShortName;
    NSDate * _startGameTime;
}

@property (nonatomic, readonly, copy) NSString *leagueName;
@property (nonatomic, readonly, copy) NSString *leagueShortName;
@property (nonatomic, readonly, copy) NSDate *startGameTime;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)leagueName;
- (id)leagueShortName;
- (id)startGameTime;

@end
