
@interface CMVO2MaxRetrocomputeState : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSNumber * _meanDelta;
    NSDate * _startDate;
    long long  _status;
}

@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSNumber *meanDelta;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 meanDelta:(id)arg4;
- (id)meanDelta;
- (id)startDate;
- (long long)status;

@end
