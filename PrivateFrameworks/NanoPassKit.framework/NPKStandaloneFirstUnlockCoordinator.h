
@interface NPKStandaloneFirstUnlockCoordinator : NSObject {
    NSMutableArray * _blocksToPerformAfterFirstDeviceUnlock;
    int  _firstDeviceUnlockRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableArray *blocksToPerformAfterFirstDeviceUnlock;
@property (nonatomic) int firstDeviceUnlockRegistrationToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_performFirstUnlockWork;
- (id)blocksToPerformAfterFirstDeviceUnlock;
- (void)dealloc;
- (int)firstDeviceUnlockRegistrationToken;
- (id)initWithQueue:(id)arg1;
- (void)performSubjectToFirstUnlock:(id /* block */)arg1;
- (id)queue;
- (void)setBlocksToPerformAfterFirstDeviceUnlock:(id)arg1;
- (void)setFirstDeviceUnlockRegistrationToken:(int)arg1;
- (void)setQueue:(id)arg1;

@end
