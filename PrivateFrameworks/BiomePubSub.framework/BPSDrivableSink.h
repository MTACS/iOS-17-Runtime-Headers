
@interface BPSDrivableSink : NSObject <BPSCancellable, BPSSubscriber> {
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BPSPublisher> * _publisher;
    id /* block */  _receivedCompletion;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _rlock;
    id /* block */  _shouldContinue;
    BPSSubscriptionStatus * _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BPSPublisher> *publisher;
@property (nonatomic, copy) id /* block */ receivedCompletion;
@property (nonatomic, copy) id /* block */ shouldContinue;
@property (nonatomic, retain) BPSSubscriptionStatus *status;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_cancelPublisher:(id)arg1;
- (void)cancel;
- (void)completeWithError:(id)arg1;
- (bool)finished;
- (id)init;
- (id)initWithReceiveBookmarkCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (id)initWithReceiveCompletion:(id /* block */)arg1 shouldContinue:(id /* block */)arg2;
- (id)newBookmark;
- (id)publisher;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (id /* block */)receivedCompletion;
- (void)requestNextEvents;
- (void)setFinished:(bool)arg1;
- (void)setPublisher:(id)arg1;
- (void)setReceivedCompletion:(id /* block */)arg1;
- (void)setShouldContinue:(id /* block */)arg1;
- (void)setStatus:(id)arg1;
- (id /* block */)shouldContinue;
- (id)status;
- (void)subscribeTo:(id)arg1;

@end
