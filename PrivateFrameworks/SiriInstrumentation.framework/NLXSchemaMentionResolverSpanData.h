
@interface NLXSchemaMentionResolverSpanData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int jointScore : 1; 
        unsigned int modelScore : 1; 
    }  _has;
    double  _jointScore;
    double  _modelScore;
}

@property (nonatomic) bool hasJointScore;
@property (nonatomic) bool hasModelScore;
@property (nonatomic) double jointScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double modelScore;

- (void)deleteJointScore;
- (void)deleteModelScore;
- (id)dictionaryRepresentation;
- (bool)hasJointScore;
- (bool)hasModelScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)jointScore;
- (id)jsonData;
- (double)modelScore;
- (bool)readFrom:(id)arg1;
- (void)setHasJointScore:(bool)arg1;
- (void)setHasModelScore:(bool)arg1;
- (void)setJointScore:(double)arg1;
- (void)setModelScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
