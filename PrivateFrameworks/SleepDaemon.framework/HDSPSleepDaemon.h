
@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider> {
    HDSPEnvironment * _environment;
    NSDate * _launchDate;
    NSObject<OS_dispatch_source> * _sigtermSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *launchDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSigterm;
- (void)_setupSigtermHandler;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (id)init;
- (id)initWithBehavior:(id)arg1;
- (id)launchDate;
- (id)sigtermSource;
- (void)start;

@end
