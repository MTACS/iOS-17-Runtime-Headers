
@interface WFBlacklistStateNode : NSObject {
    unsigned long long  _blacklistedReason;
    long long  _blacklistedReasonData;
    NSString * _blacklistedReasonString;
    unsigned long long  _blacklistedState;
    NSString * _blacklistedStateString;
    double  _blacklistedStateTimestamp;
}

@property unsigned long long blacklistedReason;
@property long long blacklistedReasonData;
@property (copy) NSString *blacklistedReasonString;
@property unsigned long long blacklistedState;
@property (copy) NSString *blacklistedStateString;
@property double blacklistedStateTimestamp;

- (void).cxx_destruct;
- (unsigned long long)blacklistedReason;
- (long long)blacklistedReasonData;
- (id)blacklistedReasonString;
- (unsigned long long)blacklistedState;
- (id)blacklistedStateString;
- (double)blacklistedStateTimestamp;
- (id)init;
- (void)setBlacklistedReason:(unsigned long long)arg1;
- (void)setBlacklistedReasonData:(long long)arg1;
- (void)setBlacklistedReasonString:(id)arg1;
- (void)setBlacklistedState:(unsigned long long)arg1;
- (void)setBlacklistedStateString:(id)arg1;
- (void)setBlacklistedStateTimestamp:(double)arg1;

@end
