
@interface HKSPThrottler : NSObject {
    HKSPLimitingScheduler * _backingScheduler;
    HKSPTask * _task;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2 scheduler:(id)arg3;
- (id)initWithInterval:(double)arg1 executeBlock:(id /* block */)arg2 scheduler:(id)arg3 mutexGenerator:(id /* block */)arg4;

@end
