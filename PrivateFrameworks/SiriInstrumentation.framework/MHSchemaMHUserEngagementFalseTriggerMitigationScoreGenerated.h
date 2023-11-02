
@interface MHSchemaMHUserEngagementFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int uemScore : 1; 
        unsigned int uemThreshold : 1; 
    }  _has;
    float  _uemScore;
    float  _uemThreshold;
}

@property (nonatomic) bool hasUemScore;
@property (nonatomic) bool hasUemThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float uemScore;
@property (nonatomic) float uemThreshold;

- (void)deleteUemScore;
- (void)deleteUemThreshold;
- (id)dictionaryRepresentation;
- (bool)hasUemScore;
- (bool)hasUemThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUemScore:(bool)arg1;
- (void)setHasUemThreshold:(bool)arg1;
- (void)setUemScore:(float)arg1;
- (void)setUemThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)uemScore;
- (float)uemThreshold;
- (void)writeTo:(id)arg1;

@end
