
@interface SISchemaUEIDictationDiscoveryToolTipShown : SISchemaInstrumentationMessage {
    struct { 
        unsigned int toolTipShown : 1; 
        unsigned int hasEmoji : 1; 
    }  _has;
    bool  _hasEmoji;
    int  _toolTipShown;
}

@property (nonatomic) bool hasEmoji;
@property (nonatomic) bool hasHasEmoji;
@property (nonatomic) bool hasToolTipShown;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int toolTipShown;

- (void)deleteHasEmoji;
- (void)deleteToolTipShown;
- (id)dictionaryRepresentation;
- (bool)hasEmoji;
- (bool)hasHasEmoji;
- (bool)hasToolTipShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasEmoji:(bool)arg1;
- (void)setHasHasEmoji:(bool)arg1;
- (void)setHasToolTipShown:(bool)arg1;
- (void)setToolTipShown:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)toolTipShown;
- (void)writeTo:(id)arg1;

@end
