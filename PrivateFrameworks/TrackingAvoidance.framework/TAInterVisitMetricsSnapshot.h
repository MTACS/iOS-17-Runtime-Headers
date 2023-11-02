
@interface TAInterVisitMetricsSnapshot : NSObject <NSSecureCoding> {
    NSMutableDictionary * _accumulatedDeviceMetrics;
    NSMutableDictionary * _firstAssociatedLocationPerDevice;
    NSDate * _initialTime;
    bool  _isClosed;
    NSMutableDictionary * _lastAdvPerDevice;
    NSMutableDictionary * _lastAssociatedLocationPerDevice;
    NSDate * _lastUpdateTime;
    unsigned long long  _maxUniqueAddresses;
}

@property (nonatomic, readonly) NSMutableDictionary *accumulatedDeviceMetrics;
@property (nonatomic, readonly) NSMutableDictionary *firstAssociatedLocationPerDevice;
@property (nonatomic, readonly) NSDate *initialTime;
@property (nonatomic, readonly) bool isClosed;
@property (nonatomic, readonly) NSMutableDictionary *lastAdvPerDevice;
@property (nonatomic, readonly) NSMutableDictionary *lastAssociatedLocationPerDevice;
@property (nonatomic, readonly) NSDate *lastUpdateTime;
@property (nonatomic, readonly) unsigned long long maxUniqueAddresses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accumulatedDeviceMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)firstAssociatedLocationPerDevice;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime:(id)arg1 maxUniqueAddresses:(unsigned long long)arg2;
- (id)initialTime;
- (bool)isClosed;
- (bool)isEqual:(id)arg1;
- (id)lastAdvPerDevice;
- (id)lastAssociatedLocationPerDevice;
- (id)lastUpdateTime;
- (unsigned long long)maxUniqueAddresses;
- (void)updateInterVisitMetric:(id)arg1 store:(id)arg2 withUpdatedTime:(id)arg3 andCloseSnapshot:(bool)arg4;
- (void)updateWithInterVisitMetricsSnapshot:(id)arg1 store:(id)arg2;
- (void)visitEntryDelayCorrection:(id)arg1 store:(id)arg2;

@end
