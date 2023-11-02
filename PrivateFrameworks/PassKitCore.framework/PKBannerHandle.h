
@interface PKBannerHandle : NSObject <PKBannerService_Client, PKInvalidatable> {
    NSArray * _attributes;
    id /* block */  _completion;
    BSServiceConnection<BSServiceConnectionClient> * _connection;
    bool  _detached;
    bool  _finished;
    NSObject<OS_dispatch_group> * _initialStateUpdateTracker;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_group> * _messageTracker;
    bool  _posted;
    NSObject<OS_dispatch_queue> * _queue;
    PKBannerHandleRequest * _request;
    bool  _started;
    PKBannerHandleState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (retain) PKBannerHandleState *state;
@property (readonly) Class superclass;

+ (id)createHandleForRequest:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (oneway void)detachWithFinished:(id)arg1 reply:(id /* block */)arg2;
- (void)displayWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setState:(id)arg1;
- (id)state;

@end
