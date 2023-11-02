
@interface RateLimitAllowance : NSObject {
    double  _allowance;
    NSDate * _lastCheckedAt;
}

@property (nonatomic) double allowance;
@property (nonatomic, retain) NSDate *lastCheckedAt;

- (void).cxx_destruct;
- (double)allowance;
- (id)lastCheckedAt;
- (void)setAllowance:(double)arg1;
- (void)setLastCheckedAt:(id)arg1;

@end
