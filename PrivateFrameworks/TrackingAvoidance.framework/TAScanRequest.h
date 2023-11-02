
@interface TAScanRequest : NSObject <NSSecureCoding> {
    unsigned long long  _interVisitScanCount;
    NSDate * _lastScanRequestedDate;
    NSDate * _scheduledScanRequest;
    TAScanRequestSettings * _settings;
}

@property (nonatomic) unsigned long long interVisitScanCount;
@property (nonatomic, retain) NSDate *lastScanRequestedDate;
@property (nonatomic, readonly) NSDate *scheduledScanRequest;
@property (nonatomic, readonly) TAScanRequestSettings *settings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluateInterVisitAfterVisitExit:(id)arg1 displayEvents:(id)arg2 advertisements:(id)arg3 deviceRecord:(id)arg4 clock:(id)arg5;
- (id)evaluateVisitEntry:(id)arg1 clock:(id)arg2;
- (id)evictScheduledInterVisitScanWithClock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (unsigned long long)interVisitScanCount;
- (bool)isEqual:(id)arg1;
- (id)lastScanRequestedDate;
- (void)scheduleInterVisitScanForAdvertisement:(id)arg1 deviceRecord:(id)arg2 clock:(id)arg3;
- (id)scheduledScanRequest;
- (void)setInterVisitScanCount:(unsigned long long)arg1;
- (void)setLastScanRequestedDate:(id)arg1;
- (id)settings;
- (bool)shouldScanOnAdvertisement:(id)arg1 withDeviceRecord:(id)arg2;

@end
