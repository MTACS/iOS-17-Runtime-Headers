
@interface SISchemaIntercomMessageRecorded : SISchemaInstrumentationMessage {
    bool  _disambiguationRequired;
    long long  _durationInMs;
    struct { 
        unsigned int durationInMs : 1; 
        unsigned int isReply : 1; 
        unsigned int disambiguationRequired : 1; 
        unsigned int intercomTarget : 1; 
    }  _has;
    int  _intercomTarget;
    bool  _isReply;
}

@property (nonatomic) bool disambiguationRequired;
@property (nonatomic) long long durationInMs;
@property (nonatomic) bool hasDisambiguationRequired;
@property (nonatomic) bool hasDurationInMs;
@property (nonatomic) bool hasIntercomTarget;
@property (nonatomic) bool hasIsReply;
@property (nonatomic) int intercomTarget;
@property (nonatomic) bool isReply;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDisambiguationRequired;
- (void)deleteDurationInMs;
- (void)deleteIntercomTarget;
- (void)deleteIsReply;
- (id)dictionaryRepresentation;
- (bool)disambiguationRequired;
- (long long)durationInMs;
- (bool)hasDisambiguationRequired;
- (bool)hasDurationInMs;
- (bool)hasIntercomTarget;
- (bool)hasIsReply;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)intercomTarget;
- (bool)isEqual:(id)arg1;
- (bool)isReply;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationRequired:(bool)arg1;
- (void)setDurationInMs:(long long)arg1;
- (void)setHasDisambiguationRequired:(bool)arg1;
- (void)setHasDurationInMs:(bool)arg1;
- (void)setHasIntercomTarget:(bool)arg1;
- (void)setHasIsReply:(bool)arg1;
- (void)setIntercomTarget:(int)arg1;
- (void)setIsReply:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
