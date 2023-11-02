
@interface POMMESSchemaPOMMESRequestFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
        unsigned int pommesSearchReason : 1; 
    }  _has;
    unsigned int  _pommesSearchReason;
    int  _reason;
}

@property (nonatomic) bool hasPommesSearchReason;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int pommesSearchReason;
@property (nonatomic) int reason;

- (void)deletePommesSearchReason;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasPommesSearchReason;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)pommesSearchReason;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasPommesSearchReason:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setPommesSearchReason:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
