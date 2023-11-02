
@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage {
    bool  _hasResultIdentifier;
    NSString * _resultIdentifier;
}

@property (nonatomic) bool hasResultIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultIdentifier;

- (void).cxx_destruct;
- (void)deleteResultIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasResultIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifier;
- (void)setHasResultIdentifier:(bool)arg1;
- (void)setResultIdentifier:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
