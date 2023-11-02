
@interface HKValueHistogramSegment : NSObject <NSCopying, NSSecureCoding> {
    long long  _count;
    HKQuantityRange * _quantityRange;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly, copy) HKQuantityRange *quantityRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityRange:(id)arg1 count:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)quantityRange;

@end
