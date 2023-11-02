
@interface UAFAssetSetProgress : NSObject {
    unsigned long long  _completed;
    unsigned long long  _maxProgressBeforeComplete;
    NSString * _name;
    id /* block */  _progressWithStatus;
    NSMutableDictionary * _progresses;
    unsigned long long  _reportedPercent;
    unsigned long long  _reportedStatus;
    NSMutableDictionary * _statuses;
    unsigned long long  _total;
}

@property (nonatomic) unsigned long long completed;
@property (nonatomic) unsigned long long maxProgressBeforeComplete;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, copy) id /* block */ progressWithStatus;
@property (nonatomic, retain) NSMutableDictionary *progresses;
@property (nonatomic) unsigned long long reportedPercent;
@property (nonatomic) unsigned long long reportedStatus;
@property (nonatomic, retain) NSMutableDictionary *statuses;
@property (nonatomic) unsigned long long total;

+ (id)getSerialQueue;
+ (id)validProgressTypes;

- (void).cxx_destruct;
- (unsigned long long)completed;
- (id)initWithName:(id)arg1 maxProgressBeforeComplete:(unsigned long long)arg2 progressWithStatus:(id /* block */)arg3;
- (unsigned long long)maxProgressBeforeComplete;
- (id)name;
- (void)progress:(id)arg1 completed:(unsigned long long)arg2 total:(unsigned long long)arg3 status:(unsigned long long)arg4;
- (id /* block */)progressWithStatus;
- (id)progresses;
- (void)reportPercent:(unsigned long long)arg1 status:(unsigned long long)arg2;
- (unsigned long long)reportedPercent;
- (unsigned long long)reportedStatus;
- (void)setCompleted:(unsigned long long)arg1;
- (void)setMaxProgressBeforeComplete:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setProgressWithStatus:(id /* block */)arg1;
- (void)setProgresses:(id)arg1;
- (void)setReportedPercent:(unsigned long long)arg1;
- (void)setReportedStatus:(unsigned long long)arg1;
- (void)setStatuses:(id)arg1;
- (void)setTotal:(unsigned long long)arg1;
- (id)statuses;
- (void)summarize;
- (unsigned long long)total;

@end
