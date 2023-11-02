
@interface MHSchemaFirstPassChannelSelectionScore : SISchemaInstrumentationMessage {
    NSString * _channelString;
    float  _firstPassScore;
    struct { 
        unsigned int firstPassScore : 1; 
    }  _has;
    bool  _hasChannelString;
}

@property (nonatomic, copy) NSString *channelString;
@property (nonatomic) float firstPassScore;
@property (nonatomic) bool hasChannelString;
@property (nonatomic) bool hasFirstPassScore;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)channelString;
- (void)deleteChannelString;
- (void)deleteFirstPassScore;
- (id)dictionaryRepresentation;
- (float)firstPassScore;
- (bool)hasChannelString;
- (bool)hasFirstPassScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setChannelString:(id)arg1;
- (void)setFirstPassScore:(float)arg1;
- (void)setHasChannelString:(bool)arg1;
- (void)setHasFirstPassScore:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
