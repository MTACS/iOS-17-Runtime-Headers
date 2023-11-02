
@interface ORCHSchemaORCHMultiUserScore : SISchemaInstrumentationMessage {
    struct { 
        unsigned int score : 1; 
    }  _has;
    bool  _hasLoggableSharedUserId;
    NSString * _loggableSharedUserId;
    unsigned int  _score;
}

@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic) unsigned int score;

- (void).cxx_destruct;
- (void)deleteLoggableSharedUserId;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (bool)hasLoggableSharedUserId;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (bool)readFrom:(id)arg1;
- (unsigned int)score;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setScore:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
