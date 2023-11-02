
@interface _BPSTimerInner : NSObject <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    id /* block */  _getTimestamp;
    double  _interval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _nextIntervalBoundary;
    NSDate * _startTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interval;
@property (nonatomic, retain) NSDate *nextIntervalBoundary;
@property (nonatomic, retain) NSDate *startTimestamp;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)init;
- (id)initWithDownstream:(id)arg1 interval:(double)arg2 getTimestamp:(id /* block */)arg3;
- (double)interval;
- (id)nextIntervalBoundary;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setDownstream:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setNextIntervalBoundary:(id)arg1;
- (void)setStartTimestamp:(id)arg1;
- (id)startTimestamp;

@end
