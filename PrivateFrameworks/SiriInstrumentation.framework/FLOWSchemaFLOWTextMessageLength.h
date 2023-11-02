
@interface FLOWSchemaFLOWTextMessageLength : SISchemaInstrumentationMessage {
    struct { 
        unsigned int messageCharLength : 1; 
        unsigned int messageWordLength : 1; 
    }  _has;
    unsigned int  _messageCharLength;
    unsigned int  _messageWordLength;
}

@property (nonatomic) bool hasMessageCharLength;
@property (nonatomic) bool hasMessageWordLength;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) unsigned int messageWordLength;

- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;
- (id)dictionaryRepresentation;
- (bool)hasMessageCharLength;
- (bool)hasMessageWordLength;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)messageCharLength;
- (unsigned int)messageWordLength;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageCharLength:(bool)arg1;
- (void)setHasMessageWordLength:(bool)arg1;
- (void)setMessageCharLength:(unsigned int)arg1;
- (void)setMessageWordLength:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
