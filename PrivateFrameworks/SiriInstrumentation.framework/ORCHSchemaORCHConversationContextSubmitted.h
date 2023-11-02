
@interface ORCHSchemaORCHConversationContextSubmitted : SISchemaInstrumentationMessage {
    bool  _contextUpdateError;
    bool  _contextUpdateReceived;
    struct { 
        unsigned int contextUpdateReceived : 1; 
        unsigned int contextUpdateError : 1; 
    }  _has;
}

@property (nonatomic) bool contextUpdateError;
@property (nonatomic) bool contextUpdateReceived;
@property (nonatomic) bool hasContextUpdateError;
@property (nonatomic) bool hasContextUpdateReceived;
@property (nonatomic, readonly) NSData *jsonData;

- (bool)contextUpdateError;
- (bool)contextUpdateReceived;
- (void)deleteContextUpdateError;
- (void)deleteContextUpdateReceived;
- (id)dictionaryRepresentation;
- (bool)hasContextUpdateError;
- (bool)hasContextUpdateReceived;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContextUpdateError:(bool)arg1;
- (void)setContextUpdateReceived:(bool)arg1;
- (void)setHasContextUpdateError:(bool)arg1;
- (void)setHasContextUpdateReceived:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
