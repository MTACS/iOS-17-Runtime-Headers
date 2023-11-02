
@interface RRSchemaRREntityPoolResolveFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
}

@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;

- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
