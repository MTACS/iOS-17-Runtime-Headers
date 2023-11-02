
@protocol _SFPBSportsSubscriptionRequestItem <NSObject>

@required

- (NSString *)canonicalIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)leagueIdentifier;
- (void)setCanonicalIdentifier:(NSString *)arg1;
- (void)setLeagueIdentifier:(NSString *)arg1;
- (void)setSportIdentifier:(NSString *)arg1;
- (NSString *)sportIdentifier;

@end
