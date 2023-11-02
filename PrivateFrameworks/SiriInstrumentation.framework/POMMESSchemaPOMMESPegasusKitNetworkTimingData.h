
@interface POMMESSchemaPOMMESPegasusKitNetworkTimingData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int requestStartOffsetInMS : 1; 
        unsigned int requestEndOffsetInMS : 1; 
        unsigned int responseStartOffsetInMS : 1; 
        unsigned int responseEndOffsetInMS : 1; 
    }  _has;
    unsigned int  _requestEndOffsetInMS;
    unsigned int  _requestStartOffsetInMS;
    unsigned int  _responseEndOffsetInMS;
    unsigned int  _responseStartOffsetInMS;
}

@property (nonatomic) bool hasRequestEndOffsetInMS;
@property (nonatomic) bool hasRequestStartOffsetInMS;
@property (nonatomic) bool hasResponseEndOffsetInMS;
@property (nonatomic) bool hasResponseStartOffsetInMS;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int requestEndOffsetInMS;
@property (nonatomic) unsigned int requestStartOffsetInMS;
@property (nonatomic) unsigned int responseEndOffsetInMS;
@property (nonatomic) unsigned int responseStartOffsetInMS;

- (void)deleteRequestEndOffsetInMS;
- (void)deleteRequestStartOffsetInMS;
- (void)deleteResponseEndOffsetInMS;
- (void)deleteResponseStartOffsetInMS;
- (id)dictionaryRepresentation;
- (bool)hasRequestEndOffsetInMS;
- (bool)hasRequestStartOffsetInMS;
- (bool)hasResponseEndOffsetInMS;
- (bool)hasResponseStartOffsetInMS;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestEndOffsetInMS;
- (unsigned int)requestStartOffsetInMS;
- (unsigned int)responseEndOffsetInMS;
- (unsigned int)responseStartOffsetInMS;
- (void)setHasRequestEndOffsetInMS:(bool)arg1;
- (void)setHasRequestStartOffsetInMS:(bool)arg1;
- (void)setHasResponseEndOffsetInMS:(bool)arg1;
- (void)setHasResponseStartOffsetInMS:(bool)arg1;
- (void)setRequestEndOffsetInMS:(unsigned int)arg1;
- (void)setRequestStartOffsetInMS:(unsigned int)arg1;
- (void)setResponseEndOffsetInMS:(unsigned int)arg1;
- (void)setResponseStartOffsetInMS:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
