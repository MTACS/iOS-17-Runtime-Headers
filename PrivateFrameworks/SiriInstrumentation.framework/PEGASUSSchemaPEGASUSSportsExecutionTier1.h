
@interface PEGASUSSchemaPEGASUSSportsExecutionTier1 : SISchemaInstrumentationMessage {
    NSArray * _athleteEntities;
    NSArray * _eventEntities;
    NSArray * _leagues;
    NSArray * _sportNames;
    NSArray * _teamEntities;
}

@property (nonatomic, copy) NSArray *athleteEntities;
@property (nonatomic, copy) NSArray *eventEntities;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leagues;
@property (nonatomic, copy) NSArray *sportNames;
@property (nonatomic, copy) NSArray *teamEntities;

- (void).cxx_destruct;
- (void)addAthleteEntities:(id)arg1;
- (void)addEventEntities:(id)arg1;
- (void)addLeague:(id)arg1;
- (void)addSportName:(int)arg1;
- (void)addTeamEntities:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)athleteEntities;
- (id)athleteEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)athleteEntitiesCount;
- (void)clearAthleteEntities;
- (void)clearEventEntities;
- (void)clearLeague;
- (void)clearSportName;
- (void)clearTeamEntities;
- (void)deleteAthleteEntities;
- (void)deleteEventEntities;
- (void)deleteLeague;
- (void)deleteSportName;
- (void)deleteTeamEntities;
- (id)dictionaryRepresentation;
- (id)eventEntities;
- (id)eventEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventEntitiesCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leagueAtIndex:(unsigned long long)arg1;
- (unsigned long long)leagueCount;
- (id)leagues;
- (bool)readFrom:(id)arg1;
- (void)setAthleteEntities:(id)arg1;
- (void)setEventEntities:(id)arg1;
- (void)setLeagues:(id)arg1;
- (void)setSportNames:(id)arg1;
- (void)setTeamEntities:(id)arg1;
- (int)sportNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)sportNameCount;
- (id)sportNames;
- (id)suppressMessageUnderConditions;
- (id)teamEntities;
- (id)teamEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)teamEntitiesCount;
- (void)writeTo:(id)arg1;

@end
