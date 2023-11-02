
@interface PEGASUSSchemaPEGASUSKGQAExecutionTier1 : SISchemaInstrumentationMessage {
    NSString * _answerId;
    bool  _hasAnswerId;
    NSArray * _primaryEntities;
    NSArray * _secondaryEntities;
}

@property (nonatomic, copy) NSString *answerId;
@property (nonatomic) bool hasAnswerId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *primaryEntities;
@property (nonatomic, copy) NSArray *secondaryEntities;

- (void).cxx_destruct;
- (void)addPrimaryEntities:(id)arg1;
- (void)addSecondaryEntities:(id)arg1;
- (id)answerId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearPrimaryEntities;
- (void)clearSecondaryEntities;
- (void)deleteAnswerId;
- (void)deletePrimaryEntities;
- (void)deleteSecondaryEntities;
- (id)dictionaryRepresentation;
- (bool)hasAnswerId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)primaryEntities;
- (id)primaryEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)primaryEntitiesCount;
- (bool)readFrom:(id)arg1;
- (id)secondaryEntities;
- (id)secondaryEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)secondaryEntitiesCount;
- (void)setAnswerId:(id)arg1;
- (void)setHasAnswerId:(bool)arg1;
- (void)setPrimaryEntities:(id)arg1;
- (void)setSecondaryEntities:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
