
@interface RTFamiliarityIndexResult : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    double  _familiarityIndex;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly) double familiarityIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)familiarityIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 familiarityIndex:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
