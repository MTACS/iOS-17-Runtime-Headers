
@interface AWDLActivator : NSObject {
    struct BonjourBrowser { } * _browser;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)_stopInternal;
- (id)init;
- (void)startWithMaxDuration:(long long)arg1;
- (void)stop;

@end
