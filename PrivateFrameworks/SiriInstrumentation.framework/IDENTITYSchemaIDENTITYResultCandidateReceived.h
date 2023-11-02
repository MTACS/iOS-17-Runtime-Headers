
@interface IDENTITYSchemaIDENTITYResultCandidateReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSelected : 1; 
    }  _has;
    bool  _hasIdentityScoreCard;
    bool  _hasResultCandidateId;
    IDENTITYSchemaIDENTITYIDScoreCard * _identityScoreCard;
    bool  _isSelected;
    NSString * _resultCandidateId;
}

@property (nonatomic) bool hasIdentityScoreCard;
@property (nonatomic) bool hasIsSelected;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, retain) IDENTITYSchemaIDENTITYIDScoreCard *identityScoreCard;
@property (nonatomic) bool isSelected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIdentityScoreCard;
- (void)deleteIsSelected;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasIdentityScoreCard;
- (bool)hasIsSelected;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)identityScoreCard;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setHasIdentityScoreCard:(bool)arg1;
- (void)setHasIsSelected:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setIdentityScoreCard:(id)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
