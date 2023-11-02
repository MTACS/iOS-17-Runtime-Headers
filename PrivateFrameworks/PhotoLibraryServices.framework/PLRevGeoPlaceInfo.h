
@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding> {
    bool  _hasArea;
    double  _maximumArea;
    double  _minimumArea;
    NSString * _placeName;
}

@property (nonatomic, readonly) bool hasArea;
@property (nonatomic, readonly) double maximumArea;
@property (nonatomic, readonly) double minimumArea;
@property (nonatomic, readonly, copy) NSString *placeName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPlaceInfoArea:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArea;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceName:(id)arg1;
- (double)maximumArea;
- (double)minimumArea;
- (id)placeName;

@end
