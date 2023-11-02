
@interface HALSchemaHALForceFetchEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numDeviceContextsFetched : 1; 
    }  _has;
    unsigned int  _numDeviceContextsFetched;
}

@property (nonatomic) bool hasNumDeviceContextsFetched;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numDeviceContextsFetched;

- (void)deleteNumDeviceContextsFetched;
- (id)dictionaryRepresentation;
- (bool)hasNumDeviceContextsFetched;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numDeviceContextsFetched;
- (bool)readFrom:(id)arg1;
- (void)setHasNumDeviceContextsFetched:(bool)arg1;
- (void)setNumDeviceContextsFetched:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
