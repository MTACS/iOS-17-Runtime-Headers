
@interface SPSchedulerInformation : NSObject <NSSecureCoding> {
    long long  _advertisementCount;
    long long  _lowBatteryCount;
    long long  _priorityCount;
}

@property (nonatomic) long long advertisementCount;
@property (nonatomic) long long lowBatteryCount;
@property (nonatomic) long long priorityCount;

+ (bool)supportsSecureCoding;

- (long long)advertisementCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lowBatteryCount;
- (long long)priorityCount;
- (void)setAdvertisementCount:(long long)arg1;
- (void)setLowBatteryCount:(long long)arg1;
- (void)setPriorityCount:(long long)arg1;

@end
