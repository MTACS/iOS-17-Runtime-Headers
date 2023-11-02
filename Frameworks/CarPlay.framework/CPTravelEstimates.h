
@interface CPTravelEstimates : NSObject <NSSecureCoding> {
    NSMeasurement * _distanceRemaining;
    NSMeasurement * _distanceRemainingDisplay;
    double  _timeRemaining;
    unsigned long long  _timeRemainingColor;
}

@property (nonatomic, readonly, copy) NSMeasurement *distanceRemaining;
@property (nonatomic, readonly, copy) NSMeasurement *distanceRemainingDisplay;
@property (nonatomic, readonly) double timeRemaining;
@property (nonatomic) unsigned long long timeRemainingColor;

+ (id)_greenColor;
+ (id)_orangeColor;
+ (id)_redColor;
+ (bool)supportsSecureCoding;
+ (id)timeRemainingColorForColor:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)distanceRemaining;
- (id)distanceRemainingDisplay;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistanceRemaining:(id)arg1 distanceRemainingDisplay:(id)arg2 timeRemaining:(double)arg3;
- (id)initWithDistanceRemaining:(id)arg1 timeRemaining:(double)arg2;
- (void)setTimeRemainingColor:(unsigned long long)arg1;
- (double)timeRemaining;
- (unsigned long long)timeRemainingColor;

@end
