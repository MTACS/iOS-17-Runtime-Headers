
@interface RTFetchFingerprintsOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    unsigned long long  _settledState;
}

@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long settledState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 settledState:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setSettledState:(unsigned long long)arg1;
- (unsigned long long)settledState;

@end
