
@interface SAMicrostackshotSummary : NSObject {
    NSMutableDictionary * _microstackshotStateCounts;
    unsigned long long  _onACCount;
    unsigned long long  _onBatteryCount;
    unsigned long long  _userActiveCount;
    unsigned long long  _userIdleCount;
}

- (void).cxx_destruct;
- (id)init;

@end
