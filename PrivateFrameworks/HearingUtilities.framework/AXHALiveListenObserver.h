
@interface AXHALiveListenObserver : NSObject <AXHALiveListenDelegate, HUListenerHelperDelegate> {
    AXHALiveListenController * _controller;
    AXDispatchTimer * _liveListenLevelsTimer;
    NSMutableArray * _updateBlocks;
    NSLock * _updateLock;
}

@property (nonatomic, retain) AXHALiveListenController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AXDispatchTimer *liveListenLevelsTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateBlocks;
@property (nonatomic, retain) NSLock *updateLock;

- (void).cxx_destruct;
- (void)_notifyListenersAndPollAudioLevelIfLiveListenIsRunning;
- (void)_notifyListenersWithIsListening:(bool)arg1 audioLevel:(float)arg2;
- (void)_pollLiveListenAudioLevelAfterDelay;
- (id)controller;
- (id)initWithController:(id)arg1;
- (void)liveListenControllerStateDidChange;
- (id)liveListenLevelsTimer;
- (void)registerUpdateBlock:(id /* block */)arg1 withListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)setController:(id)arg1;
- (void)setLiveListenLevelsTimer:(id)arg1;
- (void)setUpdateBlocks:(id)arg1;
- (void)setUpdateLock:(id)arg1;
- (id)updateBlocks;
- (id)updateLock;

@end
