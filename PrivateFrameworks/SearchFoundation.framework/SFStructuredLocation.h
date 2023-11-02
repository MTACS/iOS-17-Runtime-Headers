
@interface SFStructuredLocation : NSObject <NSCopying, NSSecureCoding, SFStructuredLocation> {
    SFLatLng * _geoLocation;
    struct { 
        unsigned int radius : 1; 
    }  _has;
    double  _radius;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SFLatLng *geoLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double radius;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)geoLocation;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)radius;
- (void)setGeoLocation:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
