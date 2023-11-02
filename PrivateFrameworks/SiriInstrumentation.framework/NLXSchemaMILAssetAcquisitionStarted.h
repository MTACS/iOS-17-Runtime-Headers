
@interface NLXSchemaMILAssetAcquisitionStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int model : 1; 
    }  _has;
    int  _model;
}

@property (nonatomic) bool hasModel;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int model;

- (void)deleteModel;
- (id)dictionaryRepresentation;
- (bool)hasModel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)model;
- (bool)readFrom:(id)arg1;
- (void)setHasModel:(bool)arg1;
- (void)setModel:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
