
@interface MHSchemaMHASRAudioConfigureStarted : SISchemaInstrumentationMessage {
    int  _audioCodec;
    unsigned long long  _audioSkippedNumSamples;
    unsigned long long  _audioSkippedTimeInNs;
    struct { 
        unsigned int audioCodec : 1; 
        unsigned int audioSkippedTimeInNs : 1; 
        unsigned int audioSkippedNumSamples : 1; 
    }  _has;
}

@property (nonatomic) int audioCodec;
@property (nonatomic) unsigned long long audioSkippedNumSamples;
@property (nonatomic) unsigned long long audioSkippedTimeInNs;
@property (nonatomic) bool hasAudioCodec;
@property (nonatomic) bool hasAudioSkippedNumSamples;
@property (nonatomic) bool hasAudioSkippedTimeInNs;
@property (nonatomic, readonly) NSData *jsonData;

- (int)audioCodec;
- (unsigned long long)audioSkippedNumSamples;
- (unsigned long long)audioSkippedTimeInNs;
- (void)deleteAudioCodec;
- (void)deleteAudioSkippedNumSamples;
- (void)deleteAudioSkippedTimeInNs;
- (id)dictionaryRepresentation;
- (bool)hasAudioCodec;
- (bool)hasAudioSkippedNumSamples;
- (bool)hasAudioSkippedTimeInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAudioCodec:(int)arg1;
- (void)setAudioSkippedNumSamples:(unsigned long long)arg1;
- (void)setAudioSkippedTimeInNs:(unsigned long long)arg1;
- (void)setHasAudioCodec:(bool)arg1;
- (void)setHasAudioSkippedNumSamples:(bool)arg1;
- (void)setHasAudioSkippedTimeInNs:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
