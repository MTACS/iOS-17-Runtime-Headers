
@interface ASRSchemaASRAppLanguageModelLoadStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int modelLocale : 1; 
    }  _has;
    int  _modelLocale;
}

@property (nonatomic) bool hasModelLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int modelLocale;

- (void)deleteModelLocale;
- (id)dictionaryRepresentation;
- (bool)hasModelLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)modelLocale;
- (bool)readFrom:(id)arg1;
- (void)setHasModelLocale:(bool)arg1;
- (void)setModelLocale:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
