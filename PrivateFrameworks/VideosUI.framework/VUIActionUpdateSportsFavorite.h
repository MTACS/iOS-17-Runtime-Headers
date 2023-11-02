
@interface VUIActionUpdateSportsFavorite : VUIAction {
    NSString * _sportsLeagueID;
    NSString * _sportsTeamName;
}

@property (nonatomic, copy) NSString *sportsLeagueID;
@property (nonatomic, copy) NSString *sportsTeamName;

+ (void)performFavoritesOperation:(bool)arg1 teamId:(id)arg2 teamName:(id)arg3 requestExecutionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)initWithContextData:(id)arg1;
- (bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSportsLeagueID:(id)arg1;
- (void)setSportsTeamName:(id)arg1;
- (id)sportsLeagueID;
- (id)sportsTeamName;

@end
