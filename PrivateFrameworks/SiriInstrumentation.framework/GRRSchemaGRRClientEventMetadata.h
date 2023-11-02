
@interface GRRSchemaGRRClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _grrId;
    bool  _hasGrrId;
    bool  _hasResultCandidateId;
    NSString * _resultCandidateId;
}

@property (nonatomic, retain) SISchemaUUID *grrId;
@property (nonatomic) bool hasGrrId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGrrId;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (id)grrId;
- (bool)hasGrrId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setGrrId:(id)arg1;
- (void)setHasGrrId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
