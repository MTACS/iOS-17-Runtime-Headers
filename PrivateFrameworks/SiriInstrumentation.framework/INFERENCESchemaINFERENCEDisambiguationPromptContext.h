
@interface INFERENCESchemaINFERENCEDisambiguationPromptContext : SISchemaInstrumentationMessage {
    NSArray * _anonymizedEntitiesPresenteds;
    NSString * _anonymizedEntitySelected;
    bool  _hasAnonymizedEntitySelected;
}

@property (nonatomic, copy) NSArray *anonymizedEntitiesPresenteds;
@property (nonatomic, copy) NSString *anonymizedEntitySelected;
@property (nonatomic) bool hasAnonymizedEntitySelected;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAnonymizedEntitiesPresented:(id)arg1;
- (id)anonymizedEntitiesPresentedAtIndex:(unsigned long long)arg1;
- (unsigned long long)anonymizedEntitiesPresentedCount;
- (id)anonymizedEntitiesPresenteds;
- (id)anonymizedEntitySelected;
- (void)clearAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitiesPresented;
- (void)deleteAnonymizedEntitySelected;
- (id)dictionaryRepresentation;
- (bool)hasAnonymizedEntitySelected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAnonymizedEntitiesPresenteds:(id)arg1;
- (void)setAnonymizedEntitySelected:(id)arg1;
- (void)setHasAnonymizedEntitySelected:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
