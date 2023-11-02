
@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe> {
    NSTimer * _blockTimer;
    FBWorkspaceEventQueueLock * _queueLock;
}

@property (nonatomic, retain) NSTimer *blockTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBWorkspaceEventQueueLock *queueLock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blockTimer;
- (void)blockTimerDidFire:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)queueLock;
- (void)setBlockTimer:(id)arg1;
- (void)setQueueLock:(id)arg1;
- (id)title;

@end
