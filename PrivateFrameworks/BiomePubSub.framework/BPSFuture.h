
@interface BPSFuture : BPSPublisher {
    BPSSubscriberList * _downstreams;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _publisherLock;
    BPSFutureResult * _result;
    bool  _sentResult;
    <BPSSubscriber> * _subscriber;
}

@property (nonatomic, retain) BPSSubscriberList *downstreams;
@property (nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } publisherLock;
@property (nonatomic, retain) BPSFutureResult *result;
@property (nonatomic) bool sentResult;
@property (nonatomic, retain) <BPSSubscriber> *subscriber;

- (void).cxx_destruct;
- (bool)completed;
- (void)disassociate:(long long)arg1;
- (id)downstreams;
- (id)initWithAttemptToFulfill:(id /* block */)arg1;
- (id)nextEvent;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })publisherLock;
- (void)reset;
- (id)result;
- (bool)sentResult;
- (void)setDownstreams:(id)arg1;
- (void)setPublisherLock:(struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })arg1;
- (void)setResult:(id)arg1;
- (void)setSentResult:(bool)arg1;
- (void)setSubscriber:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)subscriber;
- (id)upstreamPublishers;

@end
