
@interface PGProcessAssertion : NSObject {
    bool  _acquired;
    RBSAssertion * _assertion;
    NSError * _error;
    NSString * _explanation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)assertionWithDomainAttribute:(id)arg1 forProcessWithIdentifier:(int)arg2 explanation:(id)arg3;
+ (id)pipVisibleAssertionForProcessWithIdentifier:(int)arg1 explanation:(id)arg2;
+ (id)pipVisibleDomainAttribute;
+ (id)transientTaskAssertionForProcessWithIdentifier:(int)arg1 explanation:(id)arg2;
+ (id)transientTaskDomainAttribute;

- (void).cxx_destruct;
- (bool)_isInvalidated;
- (void)_setInvalidated:(bool)arg1;
- (void)acquireWithTarget:(id)arg1 domainAttribute:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithExplanation:(id)arg1;
- (void)invalidate;

@end
