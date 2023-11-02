
@interface NURenderJobStatisticsHistory : NSObject {
    unsigned long long  _canceledJobsCount;
    unsigned long long  _creationsHead;
    unsigned long long  _creationsSize;
    unsigned long long  _deliveredJobsCount;
    unsigned long long  _deliveriesHead;
    unsigned long long  _deliveriesSize;
    NURenderJobStatisticsHistogram * _histogram;
    unsigned long long  _jobCount;
    NSString * _jobRequestName;
    double  _prevCreatedTime;
    double  _prevDeliveredTime;
    unsigned long long  _rollingHistoryMaxSize;
    double * _timeBetweenJobCreations;
    double * _timeBetweenJobDeliveries;
    double  _totalTimeExecuting;
    double  _totalTimeExecutingComplete;
    double  _totalTimeExecutingPrepare;
    double  _totalTimeExecutingRender;
}

@property (readonly) unsigned long long canceledJobsCount;
@property (readonly) unsigned long long deliveredJobsCount;
@property (readonly) NURenderJobStatisticsHistogram *histogram;
@property (readonly) unsigned long long jobCount;
@property (readonly) NSString *jobRequestName;
@property (readonly) unsigned long long rollingHistoryMaxSize;
@property (readonly) double*timeBetweenJobCreations;
@property (readonly) double*timeBetweenJobDeliveries;
@property (readonly) double totalTimeExecuting;
@property (readonly) double totalTimeExecutingComplete;
@property (readonly) double totalTimeExecutingPrepare;
@property (readonly) double totalTimeExecutingRender;

+ (void)setTotalSchedulerCanceledJobCount:(unsigned long long)arg1;
+ (void)setTotalSchedulerDeliveredJobCount:(unsigned long long)arg1;
+ (void)setTotalSchedulerJobCount:(unsigned long long)arg1;
+ (void)setTotalSchedulerTimeExecuting:(double)arg1;
+ (void)setTotalSchedulerTimeExecutingComplete:(double)arg1;
+ (void)setTotalSchedulerTimeExecutingPrepare:(double)arg1;
+ (void)setTotalSchedulerTimeExecutingRender:(double)arg1;
+ (unsigned long long)totalSchedulerCanceledJobCount;
+ (unsigned long long)totalSchedulerDeliveredJobCount;
+ (unsigned long long)totalSchedulerJobCount;
+ (double)totalSchedulerTimeExecuting;
+ (double)totalSchedulerTimeExecutingComplete;
+ (double)totalSchedulerTimeExecutingPrepare;
+ (double)totalSchedulerTimeExecutingRender;

- (void).cxx_destruct;
- (void)addStatisticsToHistory:(id)arg1 wasCanceled:(bool)arg2;
- (unsigned long long)canceledJobsCount;
- (void)dealloc;
- (unsigned long long)deliveredJobsCount;
- (id)description;
- (id)histogram;
- (id)initHistoryForJobsWithName:(id)arg1 rollingHistoryMaxSize:(unsigned long long)arg2;
- (unsigned long long)jobCount;
- (id)jobRequestName;
- (void)recordJobCreated;
- (unsigned long long)rollingHistoryMaxSize;
- (double*)timeBetweenJobCreations;
- (double*)timeBetweenJobDeliveries;
- (double)totalTimeExecuting;
- (double)totalTimeExecutingComplete;
- (double)totalTimeExecutingPrepare;
- (double)totalTimeExecutingRender;

@end
