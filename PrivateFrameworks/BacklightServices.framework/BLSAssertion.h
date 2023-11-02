
@interface BLSAssertion : NSObject <BLSAssertionServiceResponding, BSCancellable, BSInvalidatable> {
    BLSAssertionAcquisitionObserver * _acquisitionObserver;
    BLSAssertionDescriptor * _descriptor;
    BLSAssertionIdentifier * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_acquiredMachContinuousTime;
    unsigned long long  _lock_acquisitionState;
    bool  _lock_invalidated;
    bool  _lock_paused;
    NSHashTable * _observers;
    <BLSAssertionService> * _service;
}

@property (getter=isAcquired, nonatomic, readonly) bool acquired;
@property (nonatomic, readonly) unsigned long long acquisitionState;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BLSAssertionDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLSAssertionIdentifier *identifier;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (retain) <BLSAssertionService> *service;
@property (readonly) Class superclass;

+ (id)acquireWithExplanation:(id)arg1 observer:(id)arg2 attributes:(id)arg3;
+ (void)setDefaultService:(id)arg1;

- (void).cxx_destruct;
- (void)acquireWithCompletion:(id /* block */)arg1;
- (void)acquireWithObserver:(id)arg1;
- (unsigned long long)acquisitionState;
- (void)addObserver:(id)arg1;
- (id)attributes;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)explanation;
- (id)identifier;
- (id)initWithExplanation:(id)arg1 attributes:(id)arg2;
- (void)invalidate;
- (bool)isAcquired;
- (bool)isActive;
- (bool)isPaused;
- (void)removeObserver:(id)arg1;
- (void)restartTimeoutTimer;
- (id)service;
- (oneway void)serviceDidAcquire;
- (oneway void)serviceDidCancelWithError:(id)arg1;
- (oneway void)serviceDidPause;
- (oneway void)serviceDidResume;
- (oneway void)serviceFailedToAcquireWithError:(id)arg1;
- (oneway void)serviceWillCancel;
- (void)setIdentifier:(id)arg1;
- (void)setService:(id)arg1;

@end
