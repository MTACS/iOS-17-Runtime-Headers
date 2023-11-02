
@interface NLXSchemaCDMSpanMatcherStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int name : 1; 
    }  _has;
    int  _name;
}

@property (nonatomic) bool hasName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;

- (void)deleteName;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)name;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setName:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
