
@protocol SFSportsSubscriptionRequestItem <SFDomainSubscriptionRequestItem>

@required

- (NSString *)canonicalIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)leagueIdentifier;
- (void)setCanonicalIdentifier:(NSString *)arg1;
- (void)setLeagueIdentifier:(NSString *)arg1;
- (void)setSportIdentifier:(NSString *)arg1;
- (NSString *)sportIdentifier;

@end
