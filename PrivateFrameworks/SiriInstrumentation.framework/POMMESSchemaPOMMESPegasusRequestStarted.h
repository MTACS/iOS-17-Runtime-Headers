
@interface POMMESSchemaPOMMESPegasusRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int payloadSizeInKB : 1; 
    }  _has;
    double  _payloadSizeInKB;
}

@property (nonatomic) bool hasPayloadSizeInKB;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double payloadSizeInKB;

- (void)deletePayloadSizeInKB;
- (id)dictionaryRepresentation;
- (bool)hasPayloadSizeInKB;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)payloadSizeInKB;
- (bool)readFrom:(id)arg1;
- (void)setHasPayloadSizeInKB:(bool)arg1;
- (void)setPayloadSizeInKB:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
