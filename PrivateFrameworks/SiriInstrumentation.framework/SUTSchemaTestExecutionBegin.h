
@interface SUTSchemaTestExecutionBegin : SISchemaInstrumentationMessage {
    SUTSchemaTestContext * _context;
    struct { 
        unsigned int shouldPersistData : 1; 
    }  _has;
    bool  _hasContext;
    bool  _shouldPersistData;
}

@property (nonatomic, retain) SUTSchemaTestContext *context;
@property (nonatomic) bool hasContext;
@property (nonatomic) bool hasShouldPersistData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool shouldPersistData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)context;
- (void)deleteContext;
- (void)deleteShouldPersistData;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasShouldPersistData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasContext:(bool)arg1;
- (void)setHasShouldPersistData:(bool)arg1;
- (void)setShouldPersistData:(bool)arg1;
- (bool)shouldPersistData;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
