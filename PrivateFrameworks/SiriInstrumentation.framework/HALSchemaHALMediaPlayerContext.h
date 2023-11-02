
@interface HALSchemaHALMediaPlayerContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int state : 1; 
        unsigned int type : 1; 
        unsigned int timeSinceLastMediaPlaybackInSeconds : 1; 
    }  _has;
    int  _state;
    unsigned int  _timeSinceLastMediaPlaybackInSeconds;
    int  _type;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimeSinceLastMediaPlaybackInSeconds;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int state;
@property (nonatomic) unsigned int timeSinceLastMediaPlaybackInSeconds;
@property (nonatomic) int type;

- (void)deleteState;
- (void)deleteTimeSinceLastMediaPlaybackInSeconds;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTimeSinceLastMediaPlaybackInSeconds;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimeSinceLastMediaPlaybackInSeconds:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTimeSinceLastMediaPlaybackInSeconds:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)state;
- (id)suppressMessageUnderConditions;
- (unsigned int)timeSinceLastMediaPlaybackInSeconds;
- (int)type;
- (void)writeTo:(id)arg1;

@end
