
@interface MHSchemaMHAcousticFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mitigationType : 1; 
    }  _has;
    bool  _hasModelVersion;
    int  _mitigationType;
    NSString * _modelVersion;
}

@property (nonatomic) bool hasMitigationType;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mitigationType;
@property (nonatomic, copy) NSString *modelVersion;

- (void).cxx_destruct;
- (void)deleteMitigationType;
- (void)deleteModelVersion;
- (id)dictionaryRepresentation;
- (bool)hasMitigationType;
- (bool)hasModelVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mitigationType;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasMitigationType:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setMitigationType:(int)arg1;
- (void)setModelVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
