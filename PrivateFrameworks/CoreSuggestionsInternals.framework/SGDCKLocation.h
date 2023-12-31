
@interface SGDCKLocation : PBCodable <NSCopying> {
    double  _accuracy;
    NSString * _address;
    NSString * _airportCode;
    NSData * _handle;
    struct { 
        unsigned int accuracy : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int quality : 1; 
        unsigned int locationType : 1; 
    }  _has;
    NSString * _label;
    double  _latitude;
    int  _locationType;
    double  _longitude;
    double  _quality;
}

@property (nonatomic) double accuracy;
@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *airportCode;
@property (nonatomic, retain) NSData *handle;
@property (nonatomic) bool hasAccuracy;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic, readonly) bool hasAirportCode;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLocationType;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasQuality;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) double latitude;
@property (nonatomic) int locationType;
@property (nonatomic) double longitude;
@property (nonatomic) double quality;

- (void).cxx_destruct;
- (int)StringAsLocationType:(id)arg1;
- (double)accuracy;
- (id)address;
- (id)airportCode;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handle;
- (bool)hasAccuracy;
- (bool)hasAddress;
- (bool)hasAirportCode;
- (bool)hasHandle;
- (bool)hasLabel;
- (bool)hasLatitude;
- (bool)hasLocationType;
- (bool)hasLongitude;
- (bool)hasQuality;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (double)latitude;
- (int)locationType;
- (id)locationTypeAsString:(int)arg1;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (double)quality;
- (bool)readFrom:(id)arg1;
- (void)setAccuracy:(double)arg1;
- (void)setAddress:(id)arg1;
- (void)setAirportCode:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasAccuracy:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationType:(int)arg1;
- (void)setLongitude:(double)arg1;
- (void)setQuality:(double)arg1;
- (void)writeTo:(id)arg1;

@end
