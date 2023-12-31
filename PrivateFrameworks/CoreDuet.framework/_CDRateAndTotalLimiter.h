
@interface _CDRateAndTotalLimiter : _CDRateLimiter {
    long long  _currentTotal;
    long long  _totalCount;
}

@property long long currentTotal;
@property (readonly) long long totalCount;

- (bool)credit;
- (long long)currentTotal;
- (bool)debited;
- (id)description;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2 totalCountLimit:(long long)arg3;
- (void)setCurrentTotal:(long long)arg1;
- (long long)totalCount;

@end
