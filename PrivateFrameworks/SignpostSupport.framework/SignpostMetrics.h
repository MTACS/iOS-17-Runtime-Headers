
@interface SignpostMetrics : NSObject {
    NSData * _binarySnapshot;
    NSNumber * _cpuInstructionsKI;
    NSNumber * _cpuTimeNsec;
    NSNumber * _dirtyMemoryKB;
    NSNumber * _dirtyMemoryLifetimePeakKB;
    NSNumber * _storageDirtiedKB;
}

@property (nonatomic, readonly) NSData *binarySnapshot;
@property (nonatomic, readonly) NSNumber *cpuInstructionsKI;
@property (nonatomic, readonly) NSNumber *cpuTimeNsec;
@property (nonatomic, readonly) NSNumber *dirtyMemoryKB;
@property (nonatomic, readonly) NSNumber *dirtyMemoryLifetimePeakKB;
@property (nonatomic, readonly) NSNumber *storageDirtiedKB;

+ (id)_deltaDescription:(id)arg1;
+ (id)_newMetricsFromData:(id)arg1;
+ (id)newMetricsForSignpostEvent:(id)arg1;

- (void).cxx_destruct;
- (id)binarySnapshot;
- (id)cpuInstructionsKI;
- (id)cpuTimeNsec;
- (id)debugDescription;
- (id)description;
- (id)dirtyMemoryKB;
- (id)dirtyMemoryLifetimePeakKB;
- (id)initWithSnapshotDict:(id)arg1 data:(id)arg2;
- (id)storageDirtiedKB;

@end
