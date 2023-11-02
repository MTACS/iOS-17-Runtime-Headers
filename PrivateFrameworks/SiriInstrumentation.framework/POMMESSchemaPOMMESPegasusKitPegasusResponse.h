
@interface POMMESSchemaPOMMESPegasusKitPegasusResponse : SISchemaInstrumentationMessage {
    unsigned int  _compressedResponseSizeInKB;
    struct { 
        unsigned int rawResponseSizeInKB : 1; 
        unsigned int compressedResponseSizeInKB : 1; 
    }  _has;
    bool  _hasTimingData;
    unsigned int  _rawResponseSizeInKB;
    POMMESSchemaPOMMESPegasusKitNetworkTimingData * _timingData;
}

@property (nonatomic) unsigned int compressedResponseSizeInKB;
@property (nonatomic) bool hasCompressedResponseSizeInKB;
@property (nonatomic) bool hasRawResponseSizeInKB;
@property (nonatomic) bool hasTimingData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int rawResponseSizeInKB;
@property (nonatomic, retain) POMMESSchemaPOMMESPegasusKitNetworkTimingData *timingData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)compressedResponseSizeInKB;
- (void)deleteCompressedResponseSizeInKB;
- (void)deleteRawResponseSizeInKB;
- (void)deleteTimingData;
- (id)dictionaryRepresentation;
- (bool)hasCompressedResponseSizeInKB;
- (bool)hasRawResponseSizeInKB;
- (bool)hasTimingData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)rawResponseSizeInKB;
- (bool)readFrom:(id)arg1;
- (void)setCompressedResponseSizeInKB:(unsigned int)arg1;
- (void)setHasCompressedResponseSizeInKB:(bool)arg1;
- (void)setHasRawResponseSizeInKB:(bool)arg1;
- (void)setHasTimingData:(bool)arg1;
- (void)setRawResponseSizeInKB:(unsigned int)arg1;
- (void)setTimingData:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)timingData;
- (void)writeTo:(id)arg1;

@end
