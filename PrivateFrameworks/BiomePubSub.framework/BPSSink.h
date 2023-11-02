
@interface BPSSink : NSObject <BPSCancellable, BPSSubscriber> {
    long long  _demand;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BPSPublisher> * _publisher;
    id /* block */  _receivedCompletion;
    id /* block */  _receivedValue;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _rlock;
    BPSSubscriptionStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long demand;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BPSPublisher> *publisher;
@property (nonatomic, copy) id /* block */ receivedCompletion;
@property (nonatomic, copy) id /* block */ receivedValue;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_cancelPublisher:(id)arg1;
- (void)cancel;
- (void)completeWithError:(id)arg1;
- (long long)demand;
- (bool)finished;
- (id)init;
- (id)initWithReceiveBookmarkCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)initWithReceiveCompletion:(id /* block */)arg1 receiveInput:(id /* block */)arg2;
- (id)newBookmark;
- (id)publisher;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (id /* block */)receivedCompletion;
- (id /* block */)receivedValue;
- (void)requestNextEvents;
- (void)setDemand:(long long)arg1;
- (void)setFinished:(bool)arg1;
- (void)setPublisher:(id)arg1;
- (void)setReceivedCompletion:(id /* block */)arg1;
- (void)setReceivedValue:(id /* block */)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)subscribeTo:(id)arg1;

@end
