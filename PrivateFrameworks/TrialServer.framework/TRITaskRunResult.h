
@interface TRITaskRunResult : NSObject <NSCopying> {
    NSDate * _earliestRetryDate;
    NSArray * _nextTasks;
    bool  _reportResultToServer;
    int  _runStatus;
}

@property (nonatomic, readonly) NSDate *earliestRetryDate;
@property (nonatomic, readonly) NSArray *nextTasks;
@property (nonatomic, readonly) bool reportResultToServer;
@property (nonatomic, readonly) int runStatus;

+ (id)resultWithRunStatus:(int)arg1 reportResultToServer:(bool)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithReplacementEarliestRetryDate:(id)arg1;
- (id)copyWithReplacementNextTasks:(id)arg1;
- (id)copyWithReplacementReportResultToServer:(bool)arg1;
- (id)copyWithReplacementRunStatus:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earliestRetryDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRunStatus:(int)arg1 reportResultToServer:(bool)arg2 nextTasks:(id)arg3 earliestRetryDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToResult:(id)arg1;
- (id)nextTasks;
- (bool)reportResultToServer;
- (int)runStatus;

@end
