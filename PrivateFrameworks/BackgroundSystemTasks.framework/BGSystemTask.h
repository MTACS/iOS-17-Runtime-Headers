
@interface BGSystemTask : NSObject {
    id /* block */  _completionHandler;
    id /* block */  _expirationHandler;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _suspending;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (copy) id /* block */ expirationHandler;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) bool suspending;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)expirationHandler;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSuspending:(bool)arg1;
- (void)setTaskCompleted;
- (void)setTransaction:(id)arg1;
- (bool)suspendTaskForDuration:(double)arg1;
- (bool)suspending;
- (id)transaction;

@end
