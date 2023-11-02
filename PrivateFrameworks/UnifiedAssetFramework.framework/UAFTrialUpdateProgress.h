
@interface UAFTrialUpdateProgress : NSObject {
    unsigned long long  _completedWork;
    id /* block */  _detailedProgressWithStatus;
    NSMutableDictionary * _factors;
    NSString * _name;
    bool  _onDemandFactorsHaveStarted;
    bool  _outOfSpace;
    unsigned long long  _reportedCompletedWork;
    unsigned long long  _reportedStatus;
    unsigned long long  _reportedTotalWork;
    NSMutableDictionary * _statuses;
    unsigned long long  _totalWork;
}

@property (nonatomic) unsigned long long completedWork;
@property (nonatomic, copy) id /* block */ detailedProgressWithStatus;
@property (nonatomic, retain) NSMutableDictionary *factors;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool onDemandFactorsHaveStarted;
@property (nonatomic) bool outOfSpace;
@property (nonatomic) unsigned long long reportedCompletedWork;
@property (nonatomic) unsigned long long reportedStatus;
@property (nonatomic) unsigned long long reportedTotalWork;
@property (nonatomic, retain) NSMutableDictionary *statuses;
@property (nonatomic) unsigned long long totalWork;

+ (id)getSerialQueue;

- (void).cxx_destruct;
- (unsigned long long)completedWork;
- (id /* block */)detailedProgressWithStatus;
- (id)factors;
- (id)getFactorProgressKey:(id)arg1 factor:(id)arg2;
- (id)initWithTrialFactors:(id)arg1 detailedProgressWithStatus:(id /* block */)arg2;
- (id)name;
- (bool)onDemandFactorsHaveStarted;
- (void)onDemandFactorsStarted;
- (bool)outOfSpace;
- (void)outOfSpaceEncountered;
- (void)reportStatus:(unsigned long long)arg1;
- (unsigned long long)reportedCompletedWork;
- (unsigned long long)reportedStatus;
- (unsigned long long)reportedTotalWork;
- (void)setCompletedWork:(unsigned long long)arg1;
- (void)setDetailedProgressWithStatus:(id /* block */)arg1;
- (void)setFactors:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOnDemandFactorsHaveStarted:(bool)arg1;
- (void)setOutOfSpace:(bool)arg1;
- (void)setReportedCompletedWork:(unsigned long long)arg1;
- (void)setReportedStatus:(unsigned long long)arg1;
- (void)setReportedTotalWork:(unsigned long long)arg1;
- (void)setStatuses:(id)arg1;
- (void)setTotalWork:(unsigned long long)arg1;
- (id)statuses;
- (void)summarize;
- (unsigned long long)totalWork;
- (void)trialFactorFinished:(id)arg1 namespace:(id)arg2;
- (void)trialFactorProgress:(id)arg1 namespace:(id)arg2 fractionCompleted:(double)arg3 status:(unsigned long long)arg4;
- (void)trialFactorStarted:(id)arg1 namespace:(id)arg2 size:(unsigned long long)arg3 status:(unsigned long long)arg4;
- (void)updateFinished;
- (void)updateStarted;

@end
