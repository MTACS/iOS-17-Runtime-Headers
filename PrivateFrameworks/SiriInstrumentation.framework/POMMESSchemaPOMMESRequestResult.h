
@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    struct { 
        unsigned int pommesConfidenceScore : 1; 
        unsigned int isFromResponseCache : 1; 
    }  _has;
    bool  _hasPegasusDomain;
    bool  _isFromResponseCache;
    NSString * _pegasusDomain;
    double  _pommesConfidenceScore;
}

@property (nonatomic) bool hasIsFromResponseCache;
@property (nonatomic) bool hasPegasusDomain;
@property (nonatomic) bool hasPommesConfidenceScore;
@property (nonatomic) bool isFromResponseCache;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pegasusDomain;
@property (nonatomic) double pommesConfidenceScore;

- (void).cxx_destruct;
- (void)deleteIsFromResponseCache;
- (void)deletePegasusDomain;
- (void)deletePommesConfidenceScore;
- (id)dictionaryRepresentation;
- (bool)hasIsFromResponseCache;
- (bool)hasPegasusDomain;
- (bool)hasPommesConfidenceScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromResponseCache;
- (id)jsonData;
- (id)pegasusDomain;
- (double)pommesConfidenceScore;
- (bool)readFrom:(id)arg1;
- (void)setHasIsFromResponseCache:(bool)arg1;
- (void)setHasPegasusDomain:(bool)arg1;
- (void)setHasPommesConfidenceScore:(bool)arg1;
- (void)setIsFromResponseCache:(bool)arg1;
- (void)setPegasusDomain:(id)arg1;
- (void)setPommesConfidenceScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
