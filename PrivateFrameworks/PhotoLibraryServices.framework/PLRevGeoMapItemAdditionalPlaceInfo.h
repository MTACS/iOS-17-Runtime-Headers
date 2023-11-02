
@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding> {
    double  _areaInSquareMeters;
    unsigned long long  _dominantOrderType;
    NSString * _name;
    NSNumber * _placeType;
}

@property (nonatomic, readonly) double areaInSquareMeters;
@property (nonatomic, readonly) unsigned long long dominantOrderType;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSNumber *placeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)areaInSquareMeters;
- (id)description;
- (unsigned long long)dominantOrderType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)placeType;

@end
