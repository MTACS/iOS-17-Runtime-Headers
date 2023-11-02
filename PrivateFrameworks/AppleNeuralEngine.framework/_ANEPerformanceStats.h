
@interface _ANEPerformanceStats : NSObject {
    unsigned long long  _hwExecutionTime;
    NSData * _perfCounterData;
}

@property (nonatomic, readonly) unsigned long long hwExecutionTime;
@property (nonatomic, readonly) NSData *perfCounterData;

+ (unsigned int)driverMaskForANEFMask:(unsigned int)arg1;
+ (id)new;
+ (id)statsWithHardwareExecutionNS:(unsigned long long)arg1;
+ (id)statsWithReconstructed:(id)arg1 hardwareExecutionNS:(unsigned long long)arg2;
+ (id)statsWithRequestPerformanceBuffer:(void**)arg1 statsBufferSize:(unsigned int*)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)emitPerfcounterSignpostsWithModelStringID:(unsigned long long)arg1;
- (unsigned long long)hwExecutionTime;
- (id)init;
- (id)initWithHardwareExecution:(unsigned long long)arg1 perfCounterData:(id)arg2;
- (id)initWithReconstructedData:(id)arg1 hardwareExecutionNS:(unsigned long long)arg2;
- (id)initWithRequestPerformanceBuffer:(void**)arg1 statsBufferSize:(unsigned int*)arg2;
- (id)perfCounterData;
- (id)performanceCounters;
- (id)stringForPerfCounter:(int)arg1;

@end
