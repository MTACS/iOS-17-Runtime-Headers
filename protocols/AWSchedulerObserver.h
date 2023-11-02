
@protocol AWSchedulerObserver

@required

- (void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(AWScheduler *)arg3;

@end
