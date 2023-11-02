
@interface SISchemaUIStatePresenting : SISchemaInstrumentationMessage {
    struct { 
        unsigned int presentationType : 1; 
    }  _has;
    int  _presentationType;
}

@property (nonatomic) bool hasPresentationType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int presentationType;

- (void)deletePresentationType;
- (id)dictionaryRepresentation;
- (bool)hasPresentationType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)presentationType;
- (bool)readFrom:(id)arg1;
- (void)setHasPresentationType:(bool)arg1;
- (void)setPresentationType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
