
@interface BPSHandleEvents : BMBookmarkablePublisher <BPSCancellable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _receiveCancel;
    id /* block */  _receiveCompletion;
    id /* block */  _receiveOutput;
    id /* block */  _receiveRequest;
    id /* block */  _receiveSubscription;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id /* block */ receiveCancel;
@property (nonatomic, readonly) id /* block */ receiveCompletion;
@property (nonatomic, readonly) id /* block */ receiveOutput;
@property (nonatomic, readonly) id /* block */ receiveRequest;
@property (nonatomic, readonly) id /* block */ receiveSubscription;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (void)cancel;
- (void)connect;
- (id)initWithUpstream:(id)arg1 receiveOutput:(id /* block */)arg2 receiveCancel:(id /* block */)arg3;
- (id)initWithUpstream:(id)arg1 receiveSubscription:(id /* block */)arg2 receiveOutput:(id /* block */)arg3 receiveCompletion:(id /* block */)arg4 receiveCancel:(id /* block */)arg5 receiveRequest:(id /* block */)arg6;
- (id)nextEvent;
- (id /* block */)receiveCancel;
- (id /* block */)receiveCompletion;
- (id /* block */)receiveOutput;
- (id /* block */)receiveRequest;
- (id /* block */)receiveSubscription;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end
