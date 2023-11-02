
@interface NLXSchemaMARRSQueryRewriteHypothesis : SISchemaInstrumentationMessage {
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int rewriteType : 1; 
    }  _has;
    int  _rewriteType;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasRewriteType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int rewriteType;

- (double)confidence;
- (void)deleteConfidence;
- (void)deleteRewriteType;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasRewriteType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)rewriteType;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasRewriteType:(bool)arg1;
- (void)setRewriteType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
