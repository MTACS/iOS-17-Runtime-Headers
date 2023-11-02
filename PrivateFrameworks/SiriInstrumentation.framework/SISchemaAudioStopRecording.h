
@interface SISchemaAudioStopRecording : SISchemaInstrumentationMessage {
    int  _endpointType;
    struct { 
        unsigned int endpointType : 1; 
    }  _has;
}

@property (nonatomic) int endpointType;
@property (nonatomic) bool hasEndpointType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEndpointType;
- (id)dictionaryRepresentation;
- (int)endpointType;
- (bool)hasEndpointType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndpointType:(int)arg1;
- (void)setHasEndpointType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
