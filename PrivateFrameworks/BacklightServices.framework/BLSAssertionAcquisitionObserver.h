
@interface BLSAssertionAcquisitionObserver : NSObject <BLSAssertionObserving> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_completion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observerWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)assertion:(id)arg1 didFailToAcquireWithError:(id)arg2;
- (void)assertionWasAcquired:(id)arg1;

@end
