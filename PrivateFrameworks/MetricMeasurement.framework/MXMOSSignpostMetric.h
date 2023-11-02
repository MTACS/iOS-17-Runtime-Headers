
@interface MXMOSSignpostMetric : MXMMetric {
    NSDate * _startDate;
    NSObject<OS_dispatch_semaphore> * _startDate_semaphore;
    unsigned long long  _startMachContTime;
    NSDate * _stopDate;
    NSObject<OS_dispatch_semaphore> * _stopDate_semaphore;
    unsigned long long  _stopMachContTime;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly, copy) MXMInstrument *instrument;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *subsystem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (bool)_shouldAlwaysWrapInProxy;
- (bool)_shouldConstructProbe;
- (bool)_shouldNeverWrapInProxy;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubsystem:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3;
- (id)name;
- (id)subsystem;

@end
