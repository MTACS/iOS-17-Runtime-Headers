
@interface MHSchemaMHCrownPressed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isAlwaysOnMicAudioUsed : 1; 
    }  _has;
    bool  _isAlwaysOnMicAudioUsed;
}

@property (nonatomic) bool hasIsAlwaysOnMicAudioUsed;
@property (nonatomic) bool isAlwaysOnMicAudioUsed;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteIsAlwaysOnMicAudioUsed;
- (id)dictionaryRepresentation;
- (bool)hasIsAlwaysOnMicAudioUsed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAlwaysOnMicAudioUsed;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAlwaysOnMicAudioUsed:(bool)arg1;
- (void)setIsAlwaysOnMicAudioUsed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
