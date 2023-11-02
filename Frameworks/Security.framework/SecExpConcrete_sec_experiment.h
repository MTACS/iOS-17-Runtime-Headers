
@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {
    SecExperiment * innerExperiment;
    unsigned long long  numRuns;
    unsigned long long  successRuns;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyExperimentConfiguration;
- (bool)experimentIsAllowedForProcess;
- (const char *)identifier;
- (id)initWithInnerExperiment:(id)arg1;
- (id)initWithName:(const char *)arg1;
- (bool)isSamplingDisabled;
- (bool)isSamplingDisabledWithDefault:(bool)arg1;
- (const char *)name;

@end
