
@interface HMDManagedStagedValue : NSObject {
    id /* block */  _commitBlock;
    id  _initialValue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFStagedValue * _stagedValue;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ commitBlock;
@property (nonatomic, readonly, copy) id initialValue;
@property (retain) HMFStagedValue *stagedValue;
@property (nonatomic) long long state;
@property (readonly) id value;

- (void).cxx_destruct;
- (void)_commitIfStaged:(id)arg1;
- (void)_handleCommitCompletionWithStagedValue:(id)arg1 success:(bool)arg2 committingValue:(id)arg3;
- (void)_resetStagedValue;
- (id /* block */)commitBlock;
- (id)initWithValue:(id)arg1 commitBlock:(id /* block */)arg2;
- (id)initialValue;
- (void)resetAndStagePriorValue;
- (void)setCommitBlock:(id /* block */)arg1;
- (void)setStagedValue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)stageValue:(id)arg1;
- (id)stagedValue;
- (long long)state;
- (id)value;

@end
