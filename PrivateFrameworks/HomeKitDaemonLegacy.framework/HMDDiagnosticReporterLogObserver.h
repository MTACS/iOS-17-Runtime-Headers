
@interface HMDDiagnosticReporterLogObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMMLogEventDispatching> * _logEventDispatcher;
    unsigned long long  _memoryExceptionThreshold;
    SDRDiagnosticReporter * _reporter;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMMLogEventDispatching> *logEventDispatcher;
@property (readonly) unsigned long long memoryExceptionThreshold;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) Class superclass;

+ (id)domainForEvent:(id)arg1;
+ (bool)isSupportedEvent:(id)arg1;
+ (id)logCategory;
+ (id)subTypeForEvent:(id)arg1;
+ (id)supportedEventClasses;
+ (id)typeForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithLogEventDispatcher:(id)arg1;
- (id)logEventDispatcher;
- (unsigned long long)memoryExceptionThreshold;
- (id)reporter;
- (bool)shouldSubmitEvent:(id)arg1;
- (void)start;
- (void)stop;

@end
