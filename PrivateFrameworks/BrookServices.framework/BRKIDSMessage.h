
@interface BRKIDSMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int radius : 1; 
    }  _has;
    NSString * _identifier;
    double  _latitude;
    double  _longitude;
    double  _radius;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasRadius;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasLatitude;
- (bool)hasLongitude;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (double)radius;
- (bool)readFrom:(id)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)writeTo:(id)arg1;

@end
