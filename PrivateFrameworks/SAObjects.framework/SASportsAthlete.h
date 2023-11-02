
@interface SASportsAthlete : SASportsEntity

@property (nonatomic, retain) SASportsTeam *activeTeam;
@property (nonatomic, copy) NSArray *athleteMetadata;
@property (nonatomic, copy) NSArray *careerStatistics;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSArray *formattedMetadata;
@property (nonatomic, copy) NSArray *formattedMetadataTypes;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *height;
@property (nonatomic, copy) NSNumber *injured;
@property (nonatomic, copy) NSString *jerseyNumber;
@property (nonatomic, copy) NSArray *lastGameStatistics;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *position;
@property (nonatomic, copy) NSArray *previousTeams;
@property (nonatomic, copy) NSArray *statistics;
@property (nonatomic, copy) NSString *weight;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)athlete;
+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)activeTeam;
- (id)athleteMetadata;
- (id)careerStatistics;
- (id)encodedClassName;
- (id)firstName;
- (id)formattedMetadata;
- (id)formattedMetadataTypes;
- (id)gender;
- (id)groupIdentifier;
- (id)height;
- (id)injured;
- (id)jerseyNumber;
- (id)lastGameStatistics;
- (id)lastName;
- (id)nickname;
- (id)position;
- (id)previousTeams;
- (void)setActiveTeam:(id)arg1;
- (void)setAthleteMetadata:(id)arg1;
- (void)setCareerStatistics:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFormattedMetadata:(id)arg1;
- (void)setFormattedMetadataTypes:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setInjured:(id)arg1;
- (void)setJerseyNumber:(id)arg1;
- (void)setLastGameStatistics:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPreviousTeams:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)statistics;
- (id)weight;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)siriui_enumerateEntitiesWithGroupHandler:(id /* block */)arg1 teamHandler:(id /* block */)arg2 athleteHandler:(id /* block */)arg3;

@end