
@interface HDFitnessMachineStateTimer : NSObject {
    unsigned long long  _duration;
    id /* block */  _handler;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
