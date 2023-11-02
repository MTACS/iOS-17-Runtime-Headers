
@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage {
    NSArray * _stringNames;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *stringNames;

- (void).cxx_destruct;
- (void)addStringName:(id)arg1;
- (void)clearStringName;
- (void)deleteStringName;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setStringNames:(id)arg1;
- (id)stringNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)stringNameCount;
- (id)stringNames;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
