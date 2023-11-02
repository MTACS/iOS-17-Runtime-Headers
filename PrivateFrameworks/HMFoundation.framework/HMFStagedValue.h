
@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate> {
    id  _committedValue;
    <HMFStagedValueDelegate> * _delegate;
    bool  _isStaged;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _stagedValue;
    HMFTimer * _timer;
    id /* block */  _timerFactory;
}

@property (retain) id committedValue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFStagedValueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isStaged, readonly) bool staged;
@property (readonly) Class superclass;
@property (retain) HMFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) id value;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_commitValue:(id)arg1;
- (void)_stageValue:(id)arg1 withTimer:(id)arg2;
- (void)_unstageValue;
- (void)commitValue:(id)arg1;
- (id)committedValue;
- (id)delegate;
- (id)initWithValue:(id)arg1;
- (bool)isStaged;
- (void)setCommittedValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerFactory:(id /* block */)arg1;
- (void)stageValue:(id)arg1;
- (void)stageValue:(id)arg1 withTimeout:(double)arg2;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (id)value;

@end
