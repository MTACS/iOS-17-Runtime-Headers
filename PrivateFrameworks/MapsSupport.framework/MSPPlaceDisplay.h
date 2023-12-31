
@interface MSPPlaceDisplay : PBCodable <NSCopying> {
    GEOMapItemStorage * _placeMapItemStorage;
    NSString * _supersededSearchIdentifier;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPlaceMapItemStorage;
@property (nonatomic, readonly) bool hasSupersededSearchIdentifier;
@property (nonatomic, retain) GEOMapItemStorage *placeMapItemStorage;
@property (nonatomic, retain) NSString *supersededSearchIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceMapItemStorage;
- (bool)hasSupersededSearchIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeMapItemStorage;
- (bool)readFrom:(id)arg1;
- (void)setPlaceMapItemStorage:(id)arg1;
- (void)setSupersededSearchIdentifier:(id)arg1;
- (id)supersededSearchIdentifier;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
