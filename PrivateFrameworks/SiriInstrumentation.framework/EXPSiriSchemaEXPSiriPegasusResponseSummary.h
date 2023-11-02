
@interface EXPSiriSchemaEXPSiriPegasusResponseSummary : SISchemaInstrumentationMessage {
    NSArray * _canonicalIds;
    NSString * _catId;
    float  _confidenceScore;
    struct { 
        unsigned int resultDomain : 1; 
        unsigned int responseStatus : 1; 
        unsigned int confidenceScore : 1; 
    }  _has;
    bool  _hasCatId;
    int  _responseStatus;
    int  _resultDomain;
}

@property (nonatomic, copy) NSArray *canonicalIds;
@property (nonatomic, copy) NSString *catId;
@property (nonatomic) float confidenceScore;
@property (nonatomic) bool hasCatId;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasResponseStatus;
@property (nonatomic) bool hasResultDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int responseStatus;
@property (nonatomic) int resultDomain;

- (void).cxx_destruct;
- (void)addCanonicalIds:(id)arg1;
- (id)canonicalIds;
- (id)canonicalIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)canonicalIdsCount;
- (id)catId;
- (void)clearCanonicalIds;
- (float)confidenceScore;
- (void)deleteCanonicalIds;
- (void)deleteCatId;
- (void)deleteConfidenceScore;
- (void)deleteResponseStatus;
- (void)deleteResultDomain;
- (id)dictionaryRepresentation;
- (bool)hasCatId;
- (bool)hasConfidenceScore;
- (bool)hasResponseStatus;
- (bool)hasResultDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)responseStatus;
- (int)resultDomain;
- (void)setCanonicalIds:(id)arg1;
- (void)setCatId:(id)arg1;
- (void)setConfidenceScore:(float)arg1;
- (void)setHasCatId:(bool)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasResponseStatus:(bool)arg1;
- (void)setHasResultDomain:(bool)arg1;
- (void)setResponseStatus:(int)arg1;
- (void)setResultDomain:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
