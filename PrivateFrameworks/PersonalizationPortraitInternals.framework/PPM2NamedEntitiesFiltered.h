
@interface PPM2NamedEntitiesFiltered : PBCodable <NSCopying> {
    NSString * _activeTreatments;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, readonly) bool hasActiveTreatments;

- (void).cxx_destruct;
- (id)activeTreatments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)writeTo:(id)arg1;

@end
