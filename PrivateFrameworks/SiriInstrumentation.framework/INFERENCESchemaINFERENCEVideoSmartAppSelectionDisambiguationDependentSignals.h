
@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationDependentSignals : SISchemaInstrumentationMessage {
    int  _disambiguationAppOrdinal;
    struct { 
        unsigned int isDisambiguatedApp : 1; 
        unsigned int modelAppConfidence : 1; 
        unsigned int disambiguationAppOrdinal : 1; 
    }  _has;
    bool  _isDisambiguatedApp;
    int  _modelAppConfidence;
}

@property (nonatomic) int disambiguationAppOrdinal;
@property (nonatomic) bool hasDisambiguationAppOrdinal;
@property (nonatomic) bool hasIsDisambiguatedApp;
@property (nonatomic) bool hasModelAppConfidence;
@property (nonatomic) bool isDisambiguatedApp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int modelAppConfidence;

- (void)deleteDisambiguationAppOrdinal;
- (void)deleteIsDisambiguatedApp;
- (void)deleteModelAppConfidence;
- (id)dictionaryRepresentation;
- (int)disambiguationAppOrdinal;
- (bool)hasDisambiguationAppOrdinal;
- (bool)hasIsDisambiguatedApp;
- (bool)hasModelAppConfidence;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDisambiguatedApp;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)modelAppConfidence;
- (bool)readFrom:(id)arg1;
- (void)setDisambiguationAppOrdinal:(int)arg1;
- (void)setHasDisambiguationAppOrdinal:(bool)arg1;
- (void)setHasIsDisambiguatedApp:(bool)arg1;
- (void)setHasModelAppConfidence:(bool)arg1;
- (void)setIsDisambiguatedApp:(bool)arg1;
- (void)setModelAppConfidence:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
