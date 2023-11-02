
@interface _SFPBStructuredLocation : PBCodable <NSSecureCoding, _SFPBStructuredLocation> {
    _SFPBLatLng * _geoLocation;
    double  _radius;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFPBLatLng *geoLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double radius;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)geoLocation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)radius;
- (bool)readFrom:(id)arg1;
- (void)setGeoLocation:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
