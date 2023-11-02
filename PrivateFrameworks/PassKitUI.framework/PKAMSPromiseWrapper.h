
@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable> {
    bool  _canceled;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    AMSPromise * _promise;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithAMSPromise:(id)arg1;
- (void)invalidate;
- (bool)isCanceled;
- (bool)isInvalidated;

@end
