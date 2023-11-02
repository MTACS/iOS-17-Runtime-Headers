
@interface HMFTimer : HMFObject {
    <HMFTimerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDate * _fireDate;
    long long  _leeway;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _options;
    bool  _running;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property <HMFTimerDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSDate *fireDate;
@property (nonatomic, readonly) unsigned long long leeway;
@property (nonatomic, readonly) unsigned long long options;
@property (getter=isRunning, readonly) bool running;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__fire;
- (void)__handleExpiration;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)fire;
- (id)fireDate;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)isRunning;
- (void)kick;
- (unsigned long long)leeway;
- (unsigned long long)options;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)suspend;
- (double)timeInterval;
- (id)timer;

@end
