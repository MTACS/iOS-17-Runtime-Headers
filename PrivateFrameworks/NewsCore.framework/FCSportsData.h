
@interface FCSportsData : NSObject {
    NSString * _UMCCanonicalID;
    bool  _hideLocationInMasthead;
    NSDate * _sportsEventStartTime;
    NSString * _sportsFullName;
    unsigned long long  _sportsLeagueType;
    NSString * _sportsLocation;
    NSString * _sportsNameAbbreviation;
    NSString * _sportsNickname;
    NSString * _sportsPrimaryName;
    NSString * _sportsSecondaryName;
    unsigned long long  _sportsType;
    NSString * _sportsTypeDisplayName;
    NSString * _sportsTypePluralizedDisplayName;
    NSArray * _topLevelGroupsTagIdentifiers;
    NSString * _topLevelSportTagIdentifier;
}

@property (nonatomic, copy) NSString *UMCCanonicalID;
@property (nonatomic) bool hideLocationInMasthead;
@property (nonatomic, copy) NSDate *sportsEventStartTime;
@property (nonatomic, copy) NSString *sportsFullName;
@property (nonatomic) unsigned long long sportsLeagueType;
@property (nonatomic, copy) NSString *sportsLocation;
@property (nonatomic, copy) NSString *sportsNameAbbreviation;
@property (nonatomic, copy) NSString *sportsNickname;
@property (nonatomic, copy) NSString *sportsPrimaryName;
@property (nonatomic, copy) NSString *sportsSecondaryName;
@property (nonatomic) unsigned long long sportsType;
@property (nonatomic, copy) NSString *sportsTypeDisplayName;
@property (nonatomic, copy) NSString *sportsTypePluralizedDisplayName;
@property (nonatomic, retain) NSArray *topLevelGroupsTagIdentifiers;
@property (nonatomic, copy) NSString *topLevelSportTagIdentifier;

- (void).cxx_destruct;
- (id)UMCCanonicalID;
- (void)_inflateSportsDataFromJSONDictionary:(id)arg1;
- (bool)hideLocationInMasthead;
- (id)initWithDictionary:(id)arg1;
- (void)setHideLocationInMasthead:(bool)arg1;
- (void)setSportsEventStartTime:(id)arg1;
- (void)setSportsFullName:(id)arg1;
- (void)setSportsLeagueType:(unsigned long long)arg1;
- (void)setSportsLocation:(id)arg1;
- (void)setSportsNameAbbreviation:(id)arg1;
- (void)setSportsNickname:(id)arg1;
- (void)setSportsPrimaryName:(id)arg1;
- (void)setSportsSecondaryName:(id)arg1;
- (void)setSportsType:(unsigned long long)arg1;
- (void)setSportsTypeDisplayName:(id)arg1;
- (void)setSportsTypePluralizedDisplayName:(id)arg1;
- (void)setTopLevelGroupsTagIdentifiers:(id)arg1;
- (void)setTopLevelSportTagIdentifier:(id)arg1;
- (void)setUMCCanonicalID:(id)arg1;
- (id)sportsEventStartTime;
- (id)sportsFullName;
- (unsigned long long)sportsLeagueType;
- (id)sportsLocation;
- (id)sportsNameAbbreviation;
- (id)sportsNickname;
- (id)sportsPrimaryName;
- (id)sportsSecondaryName;
- (unsigned long long)sportsType;
- (id)sportsTypeDisplayName;
- (id)sportsTypePluralizedDisplayName;
- (id)topLevelGroupsTagIdentifiers;
- (id)topLevelSportTagIdentifier;

@end
