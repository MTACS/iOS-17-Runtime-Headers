
@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString * _debugName;
}

- (void).cxx_destruct;
- (bool)_canBeInterrupted;
- (id)_graphNodeDebugName;
- (id)init;
- (id)initWithDebugName:(id)arg1;
- (void)synchronize;

@end
