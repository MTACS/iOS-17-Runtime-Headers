
@interface GEOArrivalTimeAndDistanceInfo : NSObject <NSSecureCoding> {
    NSArray * _arrivalTimeInfo;
    double  _distanceRemainingToEndOfLeg;
    double  _distanceRemainingToEndOfRoute;
}

@property (nonatomic, retain) NSArray *arrivalTimeInfo;
@property (nonatomic) double distanceRemainingToEndOfLeg;
@property (nonatomic) double distanceRemainingToEndOfRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrivalTimeInfo;
- (double)distanceRemainingToEndOfLeg;
- (double)distanceRemainingToEndOfRoute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setArrivalTimeInfo:(id)arg1;
- (void)setDistanceRemainingToEndOfLeg:(double)arg1;
- (void)setDistanceRemainingToEndOfRoute:(double)arg1;

@end
