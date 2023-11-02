
@interface ORCHSchemaORCHNLV3ServerFallbackDeprecated : SISchemaInstrumentationMessage {
    int  _fallbackReason;
    struct { 
        unsigned int fallbackReason : 1; 
    }  _has;
}

@property (nonatomic) int fallbackReason;
@property (nonatomic) bool hasFallbackReason;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteFallbackReason;
- (id)dictionaryRepresentation;
- (int)fallbackReason;
- (bool)hasFallbackReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFallbackReason:(int)arg1;
- (void)setHasFallbackReason:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
