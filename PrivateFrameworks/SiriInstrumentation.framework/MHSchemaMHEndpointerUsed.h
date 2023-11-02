
@interface MHSchemaMHEndpointerUsed : SISchemaInstrumentationMessage {
    int  _endpointer;
    struct { 
        unsigned int endpointer : 1; 
    }  _has;
}

@property (nonatomic) int endpointer;
@property (nonatomic) bool hasEndpointer;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEndpointer;
- (id)dictionaryRepresentation;
- (int)endpointer;
- (bool)hasEndpointer;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndpointer:(int)arg1;
- (void)setHasEndpointer:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
