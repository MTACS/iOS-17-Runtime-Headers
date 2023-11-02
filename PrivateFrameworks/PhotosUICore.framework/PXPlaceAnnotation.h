
@interface PXPlaceAnnotation : NSObject <NSCopying> {
    NSNumber * _placeLevel;
    NSString * _placeName;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, retain) NSNumber *placeLevel;
@property (nonatomic, readonly) NSString *placeLevelAsString;
@property (nonatomic, retain) NSString *placeName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionary;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1;
- (id)initWithPlaceLevel:(id)arg1 placeName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlaceAnnotation:(id)arg1;
- (id)placeLevel;
- (id)placeLevelAsString;
- (id)placeName;
- (void)setPlaceLevel:(id)arg1;
- (void)setPlaceName:(id)arg1;

@end
