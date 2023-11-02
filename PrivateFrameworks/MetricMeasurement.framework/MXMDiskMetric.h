
@interface MXMDiskMetric : MXMMetric

@property (nonatomic, readonly, copy) MXMInstrument *instrument;
@property (nonatomic, readonly, copy) NSNumber *processIdentifier;
@property (nonatomic, readonly, copy) NSString *processName;

+ (id)currentProcess;

- (id)_constructProbe;
- (bool)_shouldConstructProbe;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)processIdentifier;
- (id)processName;

@end
