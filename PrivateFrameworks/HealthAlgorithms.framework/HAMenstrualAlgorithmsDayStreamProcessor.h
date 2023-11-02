
@interface HAMenstrualAlgorithmsDayStreamProcessor : NSObject <HAMenstrualAlgorithmsPhaseIngestion> {
    NSXPCConnection * _connectionToService;
    NSMutableArray * _dayInputBuffer;
    <HADayStreamProcessorServiceProtocol> * _remoteObjectProxy;
}

@property (retain) NSXPCConnection *connectionToService;
@property (nonatomic, retain) NSMutableArray *dayInputBuffer;
@property (retain) <HADayStreamProcessorServiceProtocol> *remoteObjectProxy;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (unsigned int)algorithmVersion;

- (void).cxx_destruct;
- (id)analyzeWithMostRecentMenstrualFlowJulianDayUpdated:(unsigned int)arg1 error:(id*)arg2;
- (void)appendDay:(id)arg1;
- (void)beginPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)connectionToService;
- (id)dayInputBuffer;
- (void)dealloc;
- (void)endPhase:(unsigned char)arg1 onJulianDay:(unsigned int)arg2;
- (id)initWithConfig:(id)arg1;
- (id)remoteObjectProxy;
- (void)setConnectionToService:(id)arg1;
- (void)setDayInputBuffer:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (void)hkmc_appendCycleFactorsFromDaySummary:(id)arg1;
- (void)hkmc_appendEmptyDayAtIndex:(long long)arg1;
- (void)hkmc_appendStartedCycleFactors:(id)arg1 calendar:(id)arg2;

@end
