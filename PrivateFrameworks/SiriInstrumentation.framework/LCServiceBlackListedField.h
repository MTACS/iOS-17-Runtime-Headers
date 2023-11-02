
@interface LCServiceBlackListedField : SISchemaInstrumentationMessage {
    NSString * _fullyQualifiedPath;
    bool  _hasFullyQualifiedPath;
}

@property (nonatomic, copy) NSString *fullyQualifiedPath;
@property (nonatomic) bool hasFullyQualifiedPath;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteFullyQualifiedPath;
- (id)dictionaryRepresentation;
- (id)fullyQualifiedPath;
- (bool)hasFullyQualifiedPath;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFullyQualifiedPath:(id)arg1;
- (void)setHasFullyQualifiedPath:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
