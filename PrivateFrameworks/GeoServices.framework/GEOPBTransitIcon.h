
@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {
    unsigned int  _cartoId;
    struct { 
        unsigned int has_cartoId : 1; 
        unsigned int has_transitTypeEnumValue : 1; 
    }  _flags;
    GEOStyleAttributes * _styleAttributes;
    unsigned int  _transitTypeEnumValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic) unsigned int cartoId;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCartoId;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasTransitTypeEnumValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transitTypeEnumValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)_firstAttribute;
- (unsigned int)cartoID;
- (unsigned int)cartoId;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultTransitType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCartoId;
- (bool)hasStyleAttributes;
- (bool)hasTransitTypeEnumValue;
- (unsigned long long)hash;
- (unsigned int)iconAttributeKey;
- (unsigned int)iconAttributeValue;
- (int)iconType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCartoId:(unsigned int)arg1;
- (void)setHasCartoId:(bool)arg1;
- (void)setHasTransitTypeEnumValue:(bool)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTransitTypeEnumValue:(unsigned int)arg1;
- (id)styleAttributes;
- (unsigned int)transitTypeEnumValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
