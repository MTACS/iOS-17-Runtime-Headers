
@interface MHSchemaMHEndpointerAccessibleContext : SISchemaInstrumentationMessage {
    int  _accessibleEndpointerLevel;
    struct { 
        unsigned int accessibleEndpointerLevel : 1; 
    }  _has;
}

@property (nonatomic) int accessibleEndpointerLevel;
@property (nonatomic) bool hasAccessibleEndpointerLevel;
@property (nonatomic, readonly) NSData *jsonData;

- (int)accessibleEndpointerLevel;
- (void)deleteAccessibleEndpointerLevel;
- (id)dictionaryRepresentation;
- (bool)hasAccessibleEndpointerLevel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAccessibleEndpointerLevel:(int)arg1;
- (void)setHasAccessibleEndpointerLevel:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
