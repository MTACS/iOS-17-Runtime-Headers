
@interface ASRSchemaASRSampledAudioFileEnqueued : SISchemaInstrumentationMessage {
    int  _audioCodec;
    struct { 
        unsigned int audioCodec : 1; 
    }  _has;
    bool  _hasOriginalAsrId;
    SISchemaUUID * _originalAsrId;
}

@property (nonatomic) int audioCodec;
@property (nonatomic) bool hasAudioCodec;
@property (nonatomic) bool hasOriginalAsrId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalAsrId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioCodec;
- (void)deleteAudioCodec;
- (void)deleteOriginalAsrId;
- (id)dictionaryRepresentation;
- (bool)hasAudioCodec;
- (bool)hasOriginalAsrId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalAsrId;
- (bool)readFrom:(id)arg1;
- (void)setAudioCodec:(int)arg1;
- (void)setHasAudioCodec:(bool)arg1;
- (void)setHasOriginalAsrId:(bool)arg1;
- (void)setOriginalAsrId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
