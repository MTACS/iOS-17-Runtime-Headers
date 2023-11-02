
@protocol ASCompetitionManagerObserver <NSObject>

@required

- (void)competitionManager:(ASCompetitionManager *)arg1 didUpdateCompetitionsForFriendsWithUUIDs:(NSSet *)arg2;
- (void)competitionManagerDidLoadCachedCompetitions:(ASCompetitionManager *)arg1;

@end
