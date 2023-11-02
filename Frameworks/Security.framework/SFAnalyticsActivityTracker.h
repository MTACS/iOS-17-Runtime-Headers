
@interface SFAnalyticsActivityTracker : NSObject {
    bool  _canceled;
    Class  _clientClass;
    NSNumber * _measurement;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _start;
}

@property (retain) NSNumber *measurement;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientClass:(Class)arg2;
- (id)measurement;
- (void)performAction:(id /* block */)arg1;
- (void)setMeasurement:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopWithEvent:(id)arg1 result:(id)arg2;

@end
