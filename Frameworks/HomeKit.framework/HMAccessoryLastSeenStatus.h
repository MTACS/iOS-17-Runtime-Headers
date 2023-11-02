
@interface HMAccessoryLastSeenStatus : NSObject {
    NSDate * _lastSeenDate;
    unsigned long long  _lowBatteryStatus;
}

@property (nonatomic, readonly, copy) NSDate *lastSeenDate;
@property (nonatomic, readonly) unsigned long long lowBatteryStatus;

- (void).cxx_destruct;
- (id)initWithLastSeenDate:(id)arg1 batteryStatus:(unsigned long long)arg2;
- (id)lastSeenDate;
- (unsigned long long)lowBatteryStatus;

@end
