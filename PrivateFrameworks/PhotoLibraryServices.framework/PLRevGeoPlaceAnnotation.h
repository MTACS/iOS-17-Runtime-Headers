
@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying> {
    int  _placeLevel;
    NSString * _placeName;
}

@property (nonatomic) int placeLevel;
@property (nonatomic, retain) NSString *placeName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithData:(id)arg1;
- (int)placeLevel;
- (id)placeName;
- (void)setPlaceLevel:(int)arg1;
- (void)setPlaceName:(id)arg1;

@end
