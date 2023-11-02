
@protocol SFScoreboardCardSection <SFTitleCardSection>

@required

- (NSString *)accessibilityDescription;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)eventStatus;
- (NSData *)jsonData;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setEventStatus:(NSString *)arg1;
- (void)setTeam1:(SFSportsTeam *)arg1;
- (void)setTeam2:(SFSportsTeam *)arg1;
- (SFSportsTeam *)team1;
- (SFSportsTeam *)team2;

@end
