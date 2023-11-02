
@interface PEGASUSSchemaPEGASUSAudioUnderstanding : SISchemaInstrumentationMessage {
    NSArray * _audioAttributes;
    int  _audioDecade;
    int  _audioVerb;
    struct { 
        unsigned int audioVerb : 1; 
        unsigned int requestedMediaType : 1; 
        unsigned int audioDecade : 1; 
    }  _has;
    int  _requestedMediaType;
}

@property (nonatomic, copy) NSArray *audioAttributes;
@property (nonatomic) int audioDecade;
@property (nonatomic) int audioVerb;
@property (nonatomic) bool hasAudioDecade;
@property (nonatomic) bool hasAudioVerb;
@property (nonatomic) bool hasRequestedMediaType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int requestedMediaType;

- (void).cxx_destruct;
- (void)addAudioAttributes:(int)arg1;
- (id)audioAttributes;
- (int)audioAttributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioAttributesCount;
- (int)audioDecade;
- (int)audioVerb;
- (void)clearAudioAttributes;
- (void)deleteAudioAttributes;
- (void)deleteAudioDecade;
- (void)deleteAudioVerb;
- (void)deleteRequestedMediaType;
- (id)dictionaryRepresentation;
- (bool)hasAudioDecade;
- (bool)hasAudioVerb;
- (bool)hasRequestedMediaType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)requestedMediaType;
- (void)setAudioAttributes:(id)arg1;
- (void)setAudioDecade:(int)arg1;
- (void)setAudioVerb:(int)arg1;
- (void)setHasAudioDecade:(bool)arg1;
- (void)setHasAudioVerb:(bool)arg1;
- (void)setHasRequestedMediaType:(bool)arg1;
- (void)setRequestedMediaType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
