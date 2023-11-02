
@interface POMMESSchemaPOMMESPegasusKitPegasusRequest : SISchemaInstrumentationMessage {
    unsigned int  _compressedRequestSizeInKB;
    struct { 
        unsigned int rawRequestSizeInKB : 1; 
        unsigned int compressedRequestSizeInKB : 1; 
    }  _has;
    bool  _hasPegasusRequestArguments;
    POMMESSchemaPOMMESPegasusRequestArguments * _pegasusRequestArguments;
    unsigned int  _rawRequestSizeInKB;
}

@property (nonatomic) unsigned int compressedRequestSizeInKB;
@property (nonatomic) bool hasCompressedRequestSizeInKB;
@property (nonatomic) bool hasPegasusRequestArguments;
@property (nonatomic) bool hasRawRequestSizeInKB;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) POMMESSchemaPOMMESPegasusRequestArguments *pegasusRequestArguments;
@property (nonatomic) unsigned int rawRequestSizeInKB;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)compressedRequestSizeInKB;
- (void)deleteCompressedRequestSizeInKB;
- (void)deletePegasusRequestArguments;
- (void)deleteRawRequestSizeInKB;
- (id)dictionaryRepresentation;
- (bool)hasCompressedRequestSizeInKB;
- (bool)hasPegasusRequestArguments;
- (bool)hasRawRequestSizeInKB;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pegasusRequestArguments;
- (unsigned int)rawRequestSizeInKB;
- (bool)readFrom:(id)arg1;
- (void)setCompressedRequestSizeInKB:(unsigned int)arg1;
- (void)setHasCompressedRequestSizeInKB:(bool)arg1;
- (void)setHasPegasusRequestArguments:(bool)arg1;
- (void)setHasRawRequestSizeInKB:(bool)arg1;
- (void)setPegasusRequestArguments:(id)arg1;
- (void)setRawRequestSizeInKB:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
