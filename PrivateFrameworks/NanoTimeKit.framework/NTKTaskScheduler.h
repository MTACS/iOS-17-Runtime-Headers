
@interface NTKTaskScheduler : NSObject {
    double  _waitingPeriod;
}

@property double waitingPeriod;

- (void)cancelAllTasks;
- (void)cancelTaskForToken:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)scheduleTask:(id /* block */)arg1 identifier:(id)arg2;
- (void)setWaitingPeriod:(double)arg1;
- (double)waitingPeriod;

@end
