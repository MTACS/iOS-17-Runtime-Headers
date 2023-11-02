
@interface RTStoredTripSegmentFetchOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _ascending;
    NSDateInterval * _dateInterval;
    NSNumber * _limit;
}

@property (getter=isAscending, nonatomic, readonly) bool ascending;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSNumber *limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAscending:(bool)arg1 dateInterval:(id)arg2 limit:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAscending;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFetchOptions:(id)arg1;
- (id)limit;
- (void)setDateInterval:(id)arg1;

@end
