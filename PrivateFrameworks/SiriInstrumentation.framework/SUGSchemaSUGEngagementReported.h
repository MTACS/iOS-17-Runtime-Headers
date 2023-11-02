
@interface SUGSchemaSUGEngagementReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int performedTimeSince1970InMs : 1; 
    }  _has;
    bool  _hasInteraction;
    bool  _hasUserStatistics;
    SUGSchemaSUGInteraction * _interaction;
    unsigned long long  _performedTimeSince1970InMs;
    SUGSchemaSUGUserStatistics * _userStatistics;
}

@property (nonatomic) bool hasInteraction;
@property (nonatomic) bool hasPerformedTimeSince1970InMs;
@property (nonatomic) bool hasUserStatistics;
@property (nonatomic, retain) SUGSchemaSUGInteraction *interaction;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long performedTimeSince1970InMs;
@property (nonatomic, retain) SUGSchemaSUGUserStatistics *userStatistics;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteInteraction;
- (void)deletePerformedTimeSince1970InMs;
- (void)deleteUserStatistics;
- (id)dictionaryRepresentation;
- (bool)hasInteraction;
- (bool)hasPerformedTimeSince1970InMs;
- (bool)hasUserStatistics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)performedTimeSince1970InMs;
- (bool)readFrom:(id)arg1;
- (void)setHasInteraction:(bool)arg1;
- (void)setHasPerformedTimeSince1970InMs:(bool)arg1;
- (void)setHasUserStatistics:(bool)arg1;
- (void)setInteraction:(id)arg1;
- (void)setPerformedTimeSince1970InMs:(unsigned long long)arg1;
- (void)setUserStatistics:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userStatistics;
- (void)writeTo:(id)arg1;

@end
