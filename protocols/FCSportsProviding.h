
@protocol FCSportsProviding <FCTagProviding>

@required

- (NSString *)UMCCanonicalID;
- (bool)hideLocationInMasthead;
- (bool)isSportsRecommendable;
- (NSString *)sportsData;
- (NSString *)sportsFullName;
- (unsigned long long)sportsLeagueType;
- (NSString *)sportsLocation;
- (NSString *)sportsNameAbbreviation;
- (NSString *)sportsNickname;
- (NSString *)sportsPrimaryName;
- (NSString *)sportsSecondaryName;
- (<FCSportsTheming> *)sportsTheme;
- (unsigned long long)sportsType;
- (NSString *)sportsTypeDisplayName;
- (NSString *)sportsTypePluralizedDisplayName;
- (NSArray *)topLevelGroupsTagIdentifiers;
- (NSString *)topLevelSportTagIdentifier;

@end
