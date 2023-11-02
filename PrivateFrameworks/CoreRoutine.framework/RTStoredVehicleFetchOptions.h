
@interface RTStoredVehicleFetchOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSNumber * _limit;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSNumber *limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 limit:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFetchOptions:(id)arg1;
- (id)limit;
- (void)setDateInterval:(id)arg1;

@end
