
@interface INFERENCESchemaINFERENCEConfirmationPromptContext : SISchemaInstrumentationMessage {
    NSString * _anonymizedEntityPresented;
    struct { 
        unsigned int resolution : 1; 
    }  _has;
    bool  _hasAnonymizedEntityPresented;
    int  _resolution;
}

@property (nonatomic, copy) NSString *anonymizedEntityPresented;
@property (nonatomic) bool hasAnonymizedEntityPresented;
@property (nonatomic) bool hasResolution;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int resolution;

- (void).cxx_destruct;
- (id)anonymizedEntityPresented;
- (void)deleteAnonymizedEntityPresented;
- (void)deleteResolution;
- (id)dictionaryRepresentation;
- (bool)hasAnonymizedEntityPresented;
- (bool)hasResolution;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)resolution;
- (void)setAnonymizedEntityPresented:(id)arg1;
- (void)setHasAnonymizedEntityPresented:(bool)arg1;
- (void)setHasResolution:(bool)arg1;
- (void)setResolution:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
