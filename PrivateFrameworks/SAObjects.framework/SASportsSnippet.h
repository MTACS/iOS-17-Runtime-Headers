
@interface SASportsSnippet : SAUISnippet

@property (nonatomic, retain) SASportsLeague *league;
@property (nonatomic, retain) SAUIAppPunchOut *leagueAppPunchOut;
@property (nonatomic, retain) SAUIAppPunchOut *punchOut;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)league;
- (id)leagueAppPunchOut;
- (id)punchOut;
- (void)setLeague:(id)arg1;
- (void)setLeagueAppPunchOut:(id)arg1;
- (void)setPunchOut:(id)arg1;

@end
