
@interface ATCountSessionTask : ATSessionTask {
    unsigned long long  _count;
    unsigned long long  _maxCount;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)start;

@end
