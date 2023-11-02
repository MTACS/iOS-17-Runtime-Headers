
@interface CLPInstSchemaCLPCDMReplayTaskEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int replayedSampleCount : 1; 
    }  _has;
    unsigned int  _replayedSampleCount;
}

@property (nonatomic) bool hasReplayedSampleCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int replayedSampleCount;

- (void)deleteReplayedSampleCount;
- (id)dictionaryRepresentation;
- (bool)hasReplayedSampleCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)replayedSampleCount;
- (void)setHasReplayedSampleCount:(bool)arg1;
- (void)setReplayedSampleCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
