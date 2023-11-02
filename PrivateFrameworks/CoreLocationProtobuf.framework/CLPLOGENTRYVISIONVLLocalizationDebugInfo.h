
@interface CLPLOGENTRYVISIONVLLocalizationDebugInfo : PBCodable <NSCopying> {
    CLPLOGENTRYVISIONVLLocalizationMaps488Details * _maps488Details;
}

@property (nonatomic, readonly) bool hasMaps488Details;
@property (nonatomic, retain) CLPLOGENTRYVISIONVLLocalizationMaps488Details *maps488Details;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaps488Details;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maps488Details;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMaps488Details:(id)arg1;
- (void)writeTo:(id)arg1;

@end
