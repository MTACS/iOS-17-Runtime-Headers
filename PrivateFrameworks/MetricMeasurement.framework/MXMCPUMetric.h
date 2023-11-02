
@interface MXMCPUMetric : MXMMetric

@property (nonatomic, readonly, copy) MXMInstrument *instrument;
@property (nonatomic, readonly) NSNumber *processIdentifier;
@property (nonatomic, readonly) NSString *processName;

+ (id)currentProcess;
+ (id)instrumentThread;

- (id)_constructProbe;
- (bool)_shouldConstructProbe;
- (bool)harvestData:(id*)arg1 error:(id*)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)processIdentifier;
- (id)processName;

@end
