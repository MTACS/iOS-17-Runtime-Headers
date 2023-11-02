
@interface CMContinuityCaptureMSNExceptionMonitor : NSObject {
    NSMutableArray * _entityExceptions;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (void)initialize;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)decrementExceptionCountForEntity:(long long)arg1;
- (void)incrementExceptionCountForEntity:(long long)arg1;
- (void)reset;

@end
