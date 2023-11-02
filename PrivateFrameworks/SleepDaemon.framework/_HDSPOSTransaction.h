
@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion> {
    NSString * _identifier;
    unsigned long long  _signpost_id;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_os_transaction> * _transaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long signpost_id;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } transactionLock;

+ (id)assertionWithIdentifier:(id)arg1;
+ (id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;

- (void).cxx_destruct;
- (void)_locked_release;
- (void)_withLock:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)releaseAssertion;
- (unsigned long long)signpost_id;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timer;
- (id)transaction;
- (struct os_unfair_lock_s { unsigned int x1; })transactionLock;

@end
