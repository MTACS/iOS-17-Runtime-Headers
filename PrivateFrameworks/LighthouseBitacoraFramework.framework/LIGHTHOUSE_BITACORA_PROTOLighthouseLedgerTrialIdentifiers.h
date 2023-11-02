
@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers : PBCodable <NSCopying> {
    LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers * _bmltIdentifiers;
    LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers * _experimentIdentifiers;
}

@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers *bmltIdentifiers;
@property (nonatomic, retain) LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers *experimentIdentifiers;
@property (nonatomic, readonly) bool hasBmltIdentifiers;
@property (nonatomic, readonly) bool hasExperimentIdentifiers;

- (void).cxx_destruct;
- (id)bmltIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentIdentifiers;
- (bool)hasBmltIdentifiers;
- (bool)hasExperimentIdentifiers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBmltIdentifiers:(id)arg1;
- (void)setExperimentIdentifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
