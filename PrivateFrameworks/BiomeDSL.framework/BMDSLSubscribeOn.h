
@interface BMDSLSubscribeOn : BPSPublisher <BPSCancellable> {
    bool  _cancelled;
    BPSPublisher * _currentPublisher;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    <BMDSLScheduler> * _scheduler;
    BMDSL * _upstream;
}

@property (nonatomic, readonly) <BMDSLScheduler> *scheduler;
@property (nonatomic, readonly) BMDSL *upstream;

- (void).cxx_destruct;
- (void)cancel;
- (bool)completed;
- (id)initWithUpstream:(id)arg1 scheduler:(id)arg2;
- (id)nextEvent;
- (void)reset;
- (id)scheduler;
- (id)startWithSubscriber:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;

@end
