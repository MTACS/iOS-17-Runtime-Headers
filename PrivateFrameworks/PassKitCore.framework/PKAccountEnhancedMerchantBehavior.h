
@interface PKAccountEnhancedMerchantBehavior : NSObject <NSCopying, NSSecureCoding> {
    double  _longMinRefreshPeriod;
    double  _minRefreshPeriod;
    double  _shortMinRefreshPeriod;
}

@property (nonatomic) double longMinRefreshPeriod;
@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) double shortMinRefreshPeriod;

+ (bool)supportsSecureCoding;

- (double)cooldownPeriodForLevel:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMinRefreshPeriod:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccountEnhancedMerchantBehavior:(id)arg1;
- (double)longMinRefreshPeriod;
- (double)minRefreshPeriod;
- (void)setLongMinRefreshPeriod:(double)arg1;
- (void)setMinRefreshPeriod:(double)arg1;
- (void)setShortMinRefreshPeriod:(double)arg1;
- (double)shortMinRefreshPeriod;

@end
