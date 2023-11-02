
@interface PLUSSchemaPLUSMediaGroundTruth : SISchemaInstrumentationMessage {
    SISchemaUUID * _groundTruthId;
    int  _groundTruthSource;
    struct { 
        unsigned int groundTruthSource : 1; 
        unsigned int selectedMediaEntitylocality : 1; 
        unsigned int inferredMediaEntitylocality : 1; 
    }  _has;
    bool  _hasGroundTruthId;
    bool  _hasInferredMediaEntityAdamId;
    bool  _hasSelectedMediaEntityAdamId;
    NSString * _inferredMediaEntityAdamId;
    int  _inferredMediaEntitylocality;
    NSString * _selectedMediaEntityAdamId;
    int  _selectedMediaEntitylocality;
}

@property (nonatomic, retain) SISchemaUUID *groundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) bool hasGroundTruthId;
@property (nonatomic) bool hasGroundTruthSource;
@property (nonatomic) bool hasInferredMediaEntityAdamId;
@property (nonatomic) bool hasInferredMediaEntitylocality;
@property (nonatomic) bool hasSelectedMediaEntityAdamId;
@property (nonatomic) bool hasSelectedMediaEntitylocality;
@property (nonatomic, copy) NSString *inferredMediaEntityAdamId;
@property (nonatomic) int inferredMediaEntitylocality;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *selectedMediaEntityAdamId;
@property (nonatomic) int selectedMediaEntitylocality;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteInferredMediaEntityAdamId;
- (void)deleteInferredMediaEntitylocality;
- (void)deleteSelectedMediaEntityAdamId;
- (void)deleteSelectedMediaEntitylocality;
- (id)dictionaryRepresentation;
- (id)groundTruthId;
- (int)groundTruthSource;
- (bool)hasGroundTruthId;
- (bool)hasGroundTruthSource;
- (bool)hasInferredMediaEntityAdamId;
- (bool)hasInferredMediaEntitylocality;
- (bool)hasSelectedMediaEntityAdamId;
- (bool)hasSelectedMediaEntitylocality;
- (unsigned long long)hash;
- (id)inferredMediaEntityAdamId;
- (int)inferredMediaEntitylocality;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)selectedMediaEntityAdamId;
- (int)selectedMediaEntitylocality;
- (void)setGroundTruthId:(id)arg1;
- (void)setGroundTruthSource:(int)arg1;
- (void)setHasGroundTruthId:(bool)arg1;
- (void)setHasGroundTruthSource:(bool)arg1;
- (void)setHasInferredMediaEntityAdamId:(bool)arg1;
- (void)setHasInferredMediaEntitylocality:(bool)arg1;
- (void)setHasSelectedMediaEntityAdamId:(bool)arg1;
- (void)setHasSelectedMediaEntitylocality:(bool)arg1;
- (void)setInferredMediaEntityAdamId:(id)arg1;
- (void)setInferredMediaEntitylocality:(int)arg1;
- (void)setSelectedMediaEntityAdamId:(id)arg1;
- (void)setSelectedMediaEntitylocality:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
