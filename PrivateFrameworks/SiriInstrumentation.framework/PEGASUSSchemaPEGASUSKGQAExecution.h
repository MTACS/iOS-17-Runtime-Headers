
@interface PEGASUSSchemaPEGASUSKGQAExecution : SISchemaInstrumentationMessage {
    NSArray * _attributes;
    struct { 
        unsigned int kgQAUsecase : 1; 
        unsigned int isDisputedResponse : 1; 
        unsigned int isWebExtractedFact : 1; 
    }  _has;
    bool  _hasNlgKey;
    bool  _isDisputedResponse;
    bool  _isWebExtractedFact;
    int  _kgQAUsecase;
    NSString * _nlgKey;
}

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic) bool hasIsDisputedResponse;
@property (nonatomic) bool hasIsWebExtractedFact;
@property (nonatomic) bool hasKgQAUsecase;
@property (nonatomic) bool hasNlgKey;
@property (nonatomic) bool isDisputedResponse;
@property (nonatomic) bool isWebExtractedFact;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int kgQAUsecase;
@property (nonatomic, copy) NSString *nlgKey;

- (void).cxx_destruct;
- (void)addAttributes:(id)arg1;
- (id)attributes;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)deleteAttributes;
- (void)deleteIsDisputedResponse;
- (void)deleteIsWebExtractedFact;
- (void)deleteKgQAUsecase;
- (void)deleteNlgKey;
- (id)dictionaryRepresentation;
- (bool)hasIsDisputedResponse;
- (bool)hasIsWebExtractedFact;
- (bool)hasKgQAUsecase;
- (bool)hasNlgKey;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDisputedResponse;
- (bool)isEqual:(id)arg1;
- (bool)isWebExtractedFact;
- (id)jsonData;
- (int)kgQAUsecase;
- (id)nlgKey;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setHasIsDisputedResponse:(bool)arg1;
- (void)setHasIsWebExtractedFact:(bool)arg1;
- (void)setHasKgQAUsecase:(bool)arg1;
- (void)setHasNlgKey:(bool)arg1;
- (void)setIsDisputedResponse:(bool)arg1;
- (void)setIsWebExtractedFact:(bool)arg1;
- (void)setKgQAUsecase:(int)arg1;
- (void)setNlgKey:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
