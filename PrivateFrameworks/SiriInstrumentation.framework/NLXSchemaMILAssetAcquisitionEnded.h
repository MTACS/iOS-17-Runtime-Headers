
@interface NLXSchemaMILAssetAcquisitionEnded : SISchemaInstrumentationMessage {
    int  _acquisitionType;
    struct { 
        unsigned int acquisitionType : 1; 
    }  _has;
}

@property (nonatomic) int acquisitionType;
@property (nonatomic) bool hasAcquisitionType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)acquisitionType;
- (void)deleteAcquisitionType;
- (id)dictionaryRepresentation;
- (bool)hasAcquisitionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAcquisitionType:(int)arg1;
- (void)setHasAcquisitionType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
