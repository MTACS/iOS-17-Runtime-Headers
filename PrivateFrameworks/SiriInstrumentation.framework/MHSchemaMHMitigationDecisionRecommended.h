
@interface MHSchemaMHMitigationDecisionRecommended : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isMitigationRecommended : 1; 
    }  _has;
    bool  _isMitigationRecommended;
}

@property (nonatomic) bool hasIsMitigationRecommended;
@property (nonatomic) bool isMitigationRecommended;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsMitigationRecommended;
- (id)dictionaryRepresentation;
- (bool)hasIsMitigationRecommended;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMitigationRecommended;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsMitigationRecommended:(bool)arg1;
- (void)setIsMitigationRecommended:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
