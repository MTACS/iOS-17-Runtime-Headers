
@interface MHSchemaMHCoreSpeechZeroFilterRunPair : SISchemaInstrumentationMessage {
    struct { 
        unsigned int zeroRunStartingSample : 1; 
        unsigned int zeroRunLength : 1; 
    }  _has;
    unsigned long long  _zeroRunLength;
    unsigned long long  _zeroRunStartingSample;
}

@property (nonatomic) bool hasZeroRunLength;
@property (nonatomic) bool hasZeroRunStartingSample;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long zeroRunLength;
@property (nonatomic) unsigned long long zeroRunStartingSample;

- (void)deleteZeroRunLength;
- (void)deleteZeroRunStartingSample;
- (id)dictionaryRepresentation;
- (bool)hasZeroRunLength;
- (bool)hasZeroRunStartingSample;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasZeroRunLength:(bool)arg1;
- (void)setHasZeroRunStartingSample:(bool)arg1;
- (void)setZeroRunLength:(unsigned long long)arg1;
- (void)setZeroRunStartingSample:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;
- (unsigned long long)zeroRunLength;
- (unsigned long long)zeroRunStartingSample;

@end
