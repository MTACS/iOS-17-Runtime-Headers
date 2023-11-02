
@interface UAFAutoAssetProgress : NSObject {
    NSMutableDictionary * _autoAssetSets;
    unsigned long long  _completedWork;
    id /* block */  _detailedProgressWithStatus;
    NSString * _name;
    unsigned long long  _reportedCompletedWork;
    unsigned long long  _reportedStatus;
    unsigned long long  _reportedTotalWork;
    NSMutableDictionary * _statuses;
    unsigned long long  _totalWork;
    bool  _updateIsFinished;
}

@property (nonatomic, retain) NSMutableDictionary *autoAssetSets;
@property (nonatomic) unsigned long long completedWork;
@property (nonatomic, copy) id /* block */ detailedProgressWithStatus;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long reportedCompletedWork;
@property (nonatomic) unsigned long long reportedStatus;
@property (nonatomic) unsigned long long reportedTotalWork;
@property (nonatomic, retain) NSMutableDictionary *statuses;
@property (nonatomic) unsigned long long totalWork;
@property (nonatomic) bool updateIsFinished;

+ (id)getSerialQueue;

- (void).cxx_destruct;
- (id)autoAssetSets;
- (unsigned long long)completedWork;
- (id /* block */)detailedProgressWithStatus;
- (void)finished:(id)arg1;
- (id)initWithAssetSetUsages:(id)arg1 configurationManager:(id)arg2 detailedProgressWithStatus:(id /* block */)arg3;
- (id)name;
- (void)progress:(id)arg1;
- (void)reportStatus:(unsigned long long)arg1;
- (unsigned long long)reportedCompletedWork;
- (unsigned long long)reportedStatus;
- (unsigned long long)reportedTotalWork;
- (void)setAutoAssetSets:(id)arg1;
- (void)setCompletedWork:(unsigned long long)arg1;
- (void)setDetailedProgressWithStatus:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setReportedCompletedWork:(unsigned long long)arg1;
- (void)setReportedStatus:(unsigned long long)arg1;
- (void)setReportedTotalWork:(unsigned long long)arg1;
- (void)setStatuses:(id)arg1;
- (void)setTotalWork:(unsigned long long)arg1;
- (void)setUpdateIsFinished:(bool)arg1;
- (void)started:(id)arg1;
- (id)statuses;
- (void)summarize;
- (unsigned long long)totalWork;
- (void)updateFinished;
- (bool)updateIsFinished;

@end
