
@protocol FCSportsEventProviding <FCSportsProviding>

@required

- (NSString *)eventArticleListID;
- (NSArray *)eventCompetitorTags;
- (<FCSportsProviding> *)eventLeagueTag;
- (bool)isDeprecated;
- (bool)isRouteable;
- (NSDictionary *)rosterResourceIDs;
- (NSDate *)sportsEventStartTime;

@end
