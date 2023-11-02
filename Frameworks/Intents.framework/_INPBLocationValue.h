
@interface _INPBLocationValue : PBCodable <NSCopying, NSSecureCoding, _INPBLocationValue> {
    struct { }  _has;
    GEOMapItemStorage * _mapItemStorage;
    GEOPDPlace * _place;
    _INPBValueMetadata * _valueMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMapItemStorage;
@property (nonatomic, readonly) bool hasPlace;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, retain) GEOPDPlace *place;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMapItemStorage;
- (bool)hasPlace;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapItemStorage;
- (id)place;
- (bool)readFrom:(id)arg1;
- (void)setMapItemStorage:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
