
@interface SISchemaAudioStopRecordingStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int stopReasonMajor : 1; 
        unsigned int stopReasonMinor : 1; 
    }  _has;
    int  _stopReasonMajor;
    int  _stopReasonMinor;
}

@property (nonatomic) bool hasStopReasonMajor;
@property (nonatomic) bool hasStopReasonMinor;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int stopReasonMajor;
@property (nonatomic) int stopReasonMinor;

- (void)deleteStopReasonMajor;
- (void)deleteStopReasonMinor;
- (id)dictionaryRepresentation;
- (bool)hasStopReasonMajor;
- (bool)hasStopReasonMinor;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStopReasonMajor:(bool)arg1;
- (void)setHasStopReasonMinor:(bool)arg1;
- (void)setStopReasonMajor:(int)arg1;
- (void)setStopReasonMinor:(int)arg1;
- (int)stopReasonMajor;
- (int)stopReasonMinor;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
