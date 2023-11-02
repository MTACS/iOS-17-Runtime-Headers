
@interface FLOWSchemaFLOWSmsTextContentMetadata : SISchemaInstrumentationMessage {
    FLOWSchemaFLOWKeyboardUsageMetadata * _flowKeyboardUsageMetadata;
    struct { 
        unsigned int messageCharLength : 1; 
        unsigned int messageWordLength : 1; 
        unsigned int isPunctuationUsed : 1; 
        unsigned int isPayloadMultilingual : 1; 
    }  _has;
    bool  _hasFlowKeyboardUsageMetadata;
    bool  _isPayloadMultilingual;
    bool  _isPunctuationUsed;
    unsigned int  _messageCharLength;
    unsigned int  _messageWordLength;
}

@property (nonatomic, retain) FLOWSchemaFLOWKeyboardUsageMetadata *flowKeyboardUsageMetadata;
@property (nonatomic) bool hasFlowKeyboardUsageMetadata;
@property (nonatomic) bool hasIsPayloadMultilingual;
@property (nonatomic) bool hasIsPunctuationUsed;
@property (nonatomic) bool hasMessageCharLength;
@property (nonatomic) bool hasMessageWordLength;
@property (nonatomic) bool isPayloadMultilingual;
@property (nonatomic) bool isPunctuationUsed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int messageCharLength;
@property (nonatomic) unsigned int messageWordLength;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFlowKeyboardUsageMetadata;
- (void)deleteIsPayloadMultilingual;
- (void)deleteIsPunctuationUsed;
- (void)deleteMessageCharLength;
- (void)deleteMessageWordLength;
- (id)dictionaryRepresentation;
- (id)flowKeyboardUsageMetadata;
- (bool)hasFlowKeyboardUsageMetadata;
- (bool)hasIsPayloadMultilingual;
- (bool)hasIsPunctuationUsed;
- (bool)hasMessageCharLength;
- (bool)hasMessageWordLength;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPayloadMultilingual;
- (bool)isPunctuationUsed;
- (id)jsonData;
- (unsigned int)messageCharLength;
- (unsigned int)messageWordLength;
- (bool)readFrom:(id)arg1;
- (void)setFlowKeyboardUsageMetadata:(id)arg1;
- (void)setHasFlowKeyboardUsageMetadata:(bool)arg1;
- (void)setHasIsPayloadMultilingual:(bool)arg1;
- (void)setHasIsPunctuationUsed:(bool)arg1;
- (void)setHasMessageCharLength:(bool)arg1;
- (void)setHasMessageWordLength:(bool)arg1;
- (void)setIsPayloadMultilingual:(bool)arg1;
- (void)setIsPunctuationUsed:(bool)arg1;
- (void)setMessageCharLength:(unsigned int)arg1;
- (void)setMessageWordLength:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
