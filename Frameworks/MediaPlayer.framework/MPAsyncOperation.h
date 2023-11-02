
@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming> {
    bool  _cancelled;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ICUserIdentity * _userIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (void)cancel;
- (id)error;
- (void)execute;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setUserIdentity:(id)arg1;
- (void)start;
- (id)userIdentity;

@end
