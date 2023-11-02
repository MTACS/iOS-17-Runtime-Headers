
@interface AXMetric : NSObject <AXMetricContainer, NSSecureCoding> {
    NSMutableArray * _childMetrics;
    long long  _cpuInstructions;
    long long  _cpuTime;
    long long  _dirtyMemory;
    long long  _dirtyMemoryDelta;
    long long  _dirtyMemoryPeak;
    long long  _dirtyMemoryPeakDelta;
    long long  _dirtyMemoryPeakLifetime;
    double  _endTime;
    NSString * _name;
    struct pc_session { } * _perfCheckSession;
    AXMetricSession * _session;
    double  _startTime;
}

@property (nonatomic, retain) NSMutableArray *childMetrics;
@property (nonatomic) long long cpuInstructions;
@property (nonatomic) long long cpuTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dirtyMemory;
@property (nonatomic) long long dirtyMemoryDelta;
@property (nonatomic) long long dirtyMemoryPeak;
@property (nonatomic) long long dirtyMemoryPeakDelta;
@property (nonatomic) long long dirtyMemoryPeakLifetime;
@property (nonatomic, readonly) double elapsedTime;
@property (nonatomic) double endTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool measurementsEnabled;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct pc_session { }*perfCheckSession;
@property (nonatomic) AXMetricSession *session;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendToReport:(id)arg1 withIndentation:(long long)arg2;
- (void)_endMeasurement;
- (id)_formatDeltaKbAsMbString:(long long)arg1;
- (id)_formatKbAsMbString:(long long)arg1;
- (id)_initWithName:(id)arg1 session:(id)arg2;
- (void)_startMeasurement;
- (id)childMetrics;
- (long long)cpuInstructions;
- (long long)cpuTime;
- (void)dealloc;
- (long long)dirtyMemory;
- (long long)dirtyMemoryDelta;
- (long long)dirtyMemoryPeak;
- (long long)dirtyMemoryPeakDelta;
- (long long)dirtyMemoryPeakLifetime;
- (double)elapsedTime;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)initWithCoder:(id)arg1;
- (void)measure:(id)arg1 execute:(id /* block */)arg2;
- (id)measure:(id)arg1 tryExecute:(id /* block */)arg2;
- (bool)measurementsEnabled;
- (id)name;
- (struct pc_session { }*)perfCheckSession;
- (id)session;
- (void)setChildMetrics:(id)arg1;
- (void)setCpuInstructions:(long long)arg1;
- (void)setCpuTime:(long long)arg1;
- (void)setDirtyMemory:(long long)arg1;
- (void)setDirtyMemoryDelta:(long long)arg1;
- (void)setDirtyMemoryPeak:(long long)arg1;
- (void)setDirtyMemoryPeakDelta:(long long)arg1;
- (void)setDirtyMemoryPeakLifetime:(long long)arg1;
- (void)setEndTime:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPerfCheckSession:(struct pc_session { }*)arg1;
- (void)setSession:(id)arg1;
- (void)setStartTime:(double)arg1;
- (id)startMeasure:(id)arg1;
- (double)startTime;

@end
