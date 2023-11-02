
@interface ATXModeMetadataConstants : NSObject {
    NSDictionary * _appCategoryScores_V1;
    NSDictionary * _appCategoryScores_V2;
    NSDictionary * _defaultAppGenreModeAffinities;
    NSDictionary * _defaultAppGenreModeAffinities_v2;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_invertDictionary:(id)arg1;
- (void)_populateDefaultAppGenreModeAffinities;
- (void)_populateDefaultAppGenreModeAffinities_v2;
- (id)defaultAppGenreModeAffinities;
- (id)defaultAppGenreModeAffinities_v2;
- (id)getCategoryScoresV1;
- (id)getCategoryScoresV2;
- (id)init;

@end
