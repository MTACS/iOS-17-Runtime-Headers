
@interface SBSuspendedUnderLockManager : NSObject {
    <SBSuspendedUnderLockManagerDelegate> * _delegate;
    FBWorkspaceEventQueue * _eventQueue;
    bool  _eventQueue_suspendedUnderLock;
    bool  _suspendedUnderLock;
}

@property (nonatomic) <SBSuspendedUnderLockManagerDelegate> *delegate;
@property (getter=isSuspendedUnderLock, nonatomic) bool suspendedUnderLock;

- (void).cxx_destruct;
- (bool)_shouldBeBackgroundUnderLockForScene:(id)arg1 withSettings:(id)arg2;
- (bool)_shouldPutSceneUnderLock:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (void)interceptUpdateForScene:(id)arg1 withNewSettings:(id)arg2;
- (bool)isSuspendedUnderLock;
- (void)setDelegate:(id)arg1;
- (void)setSuspendedUnderLock:(bool)arg1;
- (void)setSuspendedUnderLock:(bool)arg1 alongsideWillChangeBlock:(id /* block */)arg2 alongsideDidChangeBlock:(id /* block */)arg3;

@end
