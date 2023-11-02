
@interface CNVSchemaCNVDecisionEngineResponseReported : SISchemaInstrumentationMessage {
    NSString * _flowHandlerId;
    struct { 
        unsigned int isExistingFlowSelected : 1; 
        unsigned int isInterpretableAsUniversalCommand : 1; 
    }  _has;
    bool  _hasFlowHandlerId;
    bool  _hasParseHypothesisId;
    bool  _isExistingFlowSelected;
    bool  _isInterpretableAsUniversalCommand;
    SISchemaUUID * _parseHypothesisId;
}

@property (nonatomic, copy) NSString *flowHandlerId;
@property (nonatomic) bool hasFlowHandlerId;
@property (nonatomic) bool hasIsExistingFlowSelected;
@property (nonatomic) bool hasIsInterpretableAsUniversalCommand;
@property (nonatomic) bool hasParseHypothesisId;
@property (nonatomic) bool isExistingFlowSelected;
@property (nonatomic) bool isInterpretableAsUniversalCommand;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *parseHypothesisId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFlowHandlerId;
- (void)deleteIsExistingFlowSelected;
- (void)deleteIsInterpretableAsUniversalCommand;
- (void)deleteParseHypothesisId;
- (id)dictionaryRepresentation;
- (id)flowHandlerId;
- (bool)hasFlowHandlerId;
- (bool)hasIsExistingFlowSelected;
- (bool)hasIsInterpretableAsUniversalCommand;
- (bool)hasParseHypothesisId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExistingFlowSelected;
- (bool)isInterpretableAsUniversalCommand;
- (id)jsonData;
- (id)parseHypothesisId;
- (bool)readFrom:(id)arg1;
- (void)setFlowHandlerId:(id)arg1;
- (void)setHasFlowHandlerId:(bool)arg1;
- (void)setHasIsExistingFlowSelected:(bool)arg1;
- (void)setHasIsInterpretableAsUniversalCommand:(bool)arg1;
- (void)setHasParseHypothesisId:(bool)arg1;
- (void)setIsExistingFlowSelected:(bool)arg1;
- (void)setIsInterpretableAsUniversalCommand:(bool)arg1;
- (void)setParseHypothesisId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
