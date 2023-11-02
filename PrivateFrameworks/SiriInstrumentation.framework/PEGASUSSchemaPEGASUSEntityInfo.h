
@interface PEGASUSSchemaPEGASUSEntityInfo : SISchemaInstrumentationMessage {
    float  _confidence;
    NSString * _entityId;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    bool  _hasEntityId;
}

@property (nonatomic) float confidence;
@property (nonatomic, copy) NSString *entityId;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasEntityId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (float)confidence;
- (void)deleteConfidence;
- (void)deleteEntityId;
- (id)dictionaryRepresentation;
- (id)entityId;
- (bool)hasConfidence;
- (bool)hasEntityId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setEntityId:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasEntityId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
