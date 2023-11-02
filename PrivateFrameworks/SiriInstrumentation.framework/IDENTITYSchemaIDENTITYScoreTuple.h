
@interface IDENTITYSchemaIDENTITYScoreTuple : SISchemaInstrumentationMessage {
    unsigned int  _confidenceScore;
    struct { 
        unsigned int confidenceScore : 1; 
    }  _has;
    bool  _hasLoggableSharedUserId;
    NSString * _loggableSharedUserId;
}

@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;

- (void).cxx_destruct;
- (unsigned int)confidenceScore;
- (void)deleteConfidenceScore;
- (void)deleteLoggableSharedUserId;
- (id)dictionaryRepresentation;
- (bool)hasConfidenceScore;
- (bool)hasLoggableSharedUserId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (bool)readFrom:(id)arg1;
- (void)setConfidenceScore:(unsigned int)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
