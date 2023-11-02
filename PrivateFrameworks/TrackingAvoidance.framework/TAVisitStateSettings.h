
@interface TAVisitStateSettings : NSObject <NSSecureCoding> {
    unsigned long long  _interVisitMetricSnapshotCapacity;
    double  _interVisitSnapshotUpdateInterval;
    unsigned long long  _loiBufferPerTypeCapacity;
    double  _loiBufferTimeIntervalOfRetention;
    unsigned long long  _maxNSigmaBetweenLastLocationAndVisit;
    double  _qualitySnapshotDisplayOnDuration;
    double  _qualitySnapshotDwellDuration;
    NSSet * _sensitiveLOITypes;
    double  _snapshotBufferTimeIntervalOfRetention;
    double  _thresholdOfLocationRelevance;
    unsigned long long  _uniqueUTObservationCapPerVisit;
    unsigned long long  _visitDisplayBufferCapacity;
    unsigned long long  _visitSnapshotCapacity;
}

@property (nonatomic, readonly) unsigned long long interVisitMetricSnapshotCapacity;
@property (nonatomic, readonly) double interVisitSnapshotUpdateInterval;
@property (nonatomic, readonly) unsigned long long loiBufferPerTypeCapacity;
@property (nonatomic, readonly) double loiBufferTimeIntervalOfRetention;
@property (nonatomic, readonly) unsigned long long maxNSigmaBetweenLastLocationAndVisit;
@property (nonatomic, readonly) double qualitySnapshotDisplayOnDuration;
@property (nonatomic, readonly) double qualitySnapshotDwellDuration;
@property (nonatomic, readonly) NSSet *sensitiveLOITypes;
@property (nonatomic, readonly) double snapshotBufferTimeIntervalOfRetention;
@property (nonatomic, readonly) double thresholdOfLocationRelevance;
@property (nonatomic, readonly) unsigned long long uniqueUTObservationCapPerVisit;
@property (nonatomic, readonly) unsigned long long visitDisplayBufferCapacity;
@property (nonatomic, readonly) unsigned long long visitSnapshotCapacity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaults;
- (id)initWithVisitSnapshotCapacity:(unsigned long long)arg1 visitDisplayBufferCapacity:(unsigned long long)arg2 interVisitMetricSnapshotCapacity:(unsigned long long)arg3 interVisitSnapshotUpdateInterval:(double)arg4 thresholdOfLocationRelevance:(double)arg5 snapshotBufferTimeIntervalOfRetention:(double)arg6 loiBufferPerTypeCapacity:(unsigned long long)arg7 loiBufferTimeIntervalOfRetention:(double)arg8 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg9 qualitySnapshotDwellDuration:(double)arg10 qualitySnapshotDisplayOnDuration:(double)arg11 uniqueUTObservationCapPerVisit:(unsigned long long)arg12 sensitiveLOITypes:(id)arg13;
- (id)initWithVisitSnapshotCapacityOrDefault:(id)arg1 visitDisplayBufferCapacityOrDefault:(id)arg2 interVisitMetricSnapshotCapacityOrDefault:(id)arg3 interVisitSnapshotUpdateIntervalOrDefault:(id)arg4 thresholdOfLocationRelevanceOrDefault:(id)arg5 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg6 loiBufferPerTypeCapacityOrDefault:(id)arg7 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg8 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)arg9 qualitySnapshotDwellDurationOrDefault:(id)arg10 qualitySnapshotDisplayOnDurationOrDefault:(id)arg11 uniqueUTObservationCapPerVisitOrDefault:(id)arg12 sensitiveLOITypesOrDefault:(id)arg13;
- (unsigned long long)interVisitMetricSnapshotCapacity;
- (double)interVisitSnapshotUpdateInterval;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loiBufferPerTypeCapacity;
- (double)loiBufferTimeIntervalOfRetention;
- (unsigned long long)maxNSigmaBetweenLastLocationAndVisit;
- (double)qualitySnapshotDisplayOnDuration;
- (double)qualitySnapshotDwellDuration;
- (id)sensitiveLOITypes;
- (double)snapshotBufferTimeIntervalOfRetention;
- (double)thresholdOfLocationRelevance;
- (unsigned long long)uniqueUTObservationCapPerVisit;
- (unsigned long long)visitDisplayBufferCapacity;
- (unsigned long long)visitSnapshotCapacity;

@end
