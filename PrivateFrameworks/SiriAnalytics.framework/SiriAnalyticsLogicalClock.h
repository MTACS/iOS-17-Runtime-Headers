
@interface SiriAnalyticsLogicalClock : NSObject {
    NSUUID * _clockIdentifier;
    SiriAnalyticsLogicalClockStatistics * _clockStatistics;
    long long  _timestampOffset;
}

@property (nonatomic, readonly) NSUUID *clockIdentifier;
@property (nonatomic, readonly) SiriAnalyticsLogicalClockStatistics *clockStatistics;
@property (nonatomic, readonly) long long timestampOffset;

- (void).cxx_destruct;
- (id)clockIdentifier;
- (id)clockStatistics;
- (bool)containsTimestamp:(unsigned long long)arg1;
- (id)description;
- (id)init;
- (id)initWithClockIdentifier:(id)arg1 timestampOffset:(unsigned long long)arg2 startedOn:(unsigned long long)arg3;
- (id)logicalTimestampForMachAbsoluteTime:(unsigned long long)arg1;
- (void)stopClock;
- (long long)timestampOffset;

@end
