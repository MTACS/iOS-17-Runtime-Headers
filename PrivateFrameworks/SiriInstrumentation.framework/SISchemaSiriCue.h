
@interface SISchemaSiriCue : SISchemaInstrumentationMessage {
    struct { 
        unsigned int siriCueType : 1; 
    }  _has;
    int  _siriCueType;
}

@property (nonatomic) bool hasSiriCueType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int siriCueType;

- (void)deleteSiriCueType;
- (id)dictionaryRepresentation;
- (bool)hasSiriCueType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriCueType:(bool)arg1;
- (void)setSiriCueType:(int)arg1;
- (int)siriCueType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
