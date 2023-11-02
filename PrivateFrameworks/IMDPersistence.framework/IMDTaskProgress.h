
@interface IMDTaskProgress : NSObject {
    NSDateComponentsFormatter * _intervalFormatter;
    unsigned long long  _lastPercentComplete;
    double  _startTime;
    NSString * _taskName;
    unsigned long long  _totalCount;
}

@property (nonatomic, readonly) NSString *taskName;
@property (nonatomic, readonly) unsigned long long totalCount;

- (void)dealloc;
- (id)initWithTaskName:(id)arg1 totalCount:(unsigned long long)arg2;
- (void)startTrackingTime;
- (id)taskName;
- (unsigned long long)totalCount;
- (void)updateWithCompletedCount:(unsigned long long)arg1;

@end
