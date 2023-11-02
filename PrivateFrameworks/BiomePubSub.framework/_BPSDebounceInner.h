
@interface _BPSDebounceInner : NSObject <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    double  _dueTime;
    id /* block */  _getTimestamp;
    NSDate * _lastArrivalTimestamp;
    id  _lastEvent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (nonatomic) double dueTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastArrivalTimestamp;
@property (nonatomic, retain) id lastEvent;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (double)dueTime;
- (id)init;
- (id)initWithDownstream:(id)arg1 for:(double)arg2 getTimestamp:(id /* block */)arg3;
- (id)lastArrivalTimestamp;
- (id)lastEvent;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setDownstream:(id)arg1;
- (void)setDueTime:(double)arg1;
- (void)setLastArrivalTimestamp:(id)arg1;
- (void)setLastEvent:(id)arg1;

@end
