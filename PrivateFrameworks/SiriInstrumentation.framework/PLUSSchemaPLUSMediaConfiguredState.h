
@interface PLUSSchemaPLUSMediaConfiguredState : SISchemaInstrumentationMessage {
    struct { 
        unsigned int shadowLogging : 1; 
    }  _has;
    bool  _shadowLogging;
}

@property (nonatomic) bool hasShadowLogging;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool shadowLogging;

- (void)deleteShadowLogging;
- (id)dictionaryRepresentation;
- (bool)hasShadowLogging;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasShadowLogging:(bool)arg1;
- (void)setShadowLogging:(bool)arg1;
- (bool)shadowLogging;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
