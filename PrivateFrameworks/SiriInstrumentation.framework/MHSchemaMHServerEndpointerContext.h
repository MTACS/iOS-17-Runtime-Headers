
@interface MHSchemaMHServerEndpointerContext : SISchemaInstrumentationMessage {
    bool  _enabled;
    struct { 
        unsigned int enabled : 1; 
    }  _has;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEnabled;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
