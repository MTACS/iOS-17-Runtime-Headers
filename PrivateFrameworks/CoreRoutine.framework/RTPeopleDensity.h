
@interface RTPeopleDensity : NSObject <NSCopying, NSSecureCoding> {
    double  _densityScore;
    NSDate * _endDate;
    double  _scanDuration;
    NSDate * _startDate;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) double densityScore;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double scanDuration;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)densityScore;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)init;
- (id)initWithBundleUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 densityScore:(double)arg4 scanDuration:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)scanDuration;
- (id)startDate;
- (id)uuid;

@end
