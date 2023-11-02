
@interface PKAccountPromotionBehavior : NSObject <NSCopying, NSSecureCoding> {
    long long  _maxImpressionCount;
    double  _minRefreshPeriod;
    double  _timeVisibleAfterCompleted;
}

@property (nonatomic) long long maxImpressionCount;
@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) double timeVisibleAfterCompleted;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMinRefreshPeriod:(id)arg1 maxImpressionCount:(id)arg2 timeVisibleAfterCompleted:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountPromotionBehavior:(id)arg1;
- (long long)maxImpressionCount;
- (double)minRefreshPeriod;
- (void)setMaxImpressionCount:(long long)arg1;
- (void)setMinRefreshPeriod:(double)arg1;
- (void)setTimeVisibleAfterCompleted:(double)arg1;
- (double)timeVisibleAfterCompleted;

@end
