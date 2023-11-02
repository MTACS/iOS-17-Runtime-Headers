
@interface RTElevation : NSObject <NSCopying, NSSecureCoding> {
    double  _elevation;
    double  _elevationUncertainty;
    NSDate * _endDate;
    long long  _estimationStatus;
    NSDate * _startDate;
}

@property (nonatomic, readonly) double elevation;
@property (nonatomic, readonly) double elevationUncertainty;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long estimationStatus;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)elevation;
- (double)elevationUncertainty;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (long long)estimationStatus;
- (id)initWithCoder:(id)arg1;
- (id)initWithElevation:(double)arg1 dateInterval:(id)arg2;
- (id)initWithElevation:(double)arg1 dateInterval:(id)arg2 elevationUncertainty:(double)arg3 estimationStatus:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)startDate;

@end
