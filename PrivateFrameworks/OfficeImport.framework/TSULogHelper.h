
@interface TSULogHelper : NSObject {
    NSDate * _lastThrottleCheck;
    unsigned long long  _throttleCount;
}

@property (retain) NSDate *lastThrottleCheck;
@property unsigned long long throttleCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)incrementThrottleCountAndCheckThottleMax:(unsigned long long)arg1;
- (id)lastThrottleCheck;
- (void)setLastThrottleCheck:(id)arg1;
- (void)setThrottleCount:(unsigned long long)arg1;
- (unsigned long long)throttleCount;

@end
