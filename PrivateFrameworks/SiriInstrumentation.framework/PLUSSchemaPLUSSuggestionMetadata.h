
@interface PLUSSchemaPLUSSuggestionMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int surfacedBeforeStatus : 1; 
    }  _has;
    int  _surfacedBeforeStatus;
}

@property (nonatomic) bool hasSurfacedBeforeStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int surfacedBeforeStatus;

- (void)deleteSurfacedBeforeStatus;
- (id)dictionaryRepresentation;
- (bool)hasSurfacedBeforeStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSurfacedBeforeStatus:(bool)arg1;
- (void)setSurfacedBeforeStatus:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)surfacedBeforeStatus;
- (void)writeTo:(id)arg1;

@end
