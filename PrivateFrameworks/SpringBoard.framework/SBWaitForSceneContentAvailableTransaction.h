
@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <SBSceneHandleObserver> {
    bool  _isContentStateReady;
    bool  _manualListener;
    SBSceneHandle * _sceneHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBSceneHandle *sceneHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_noteSceneContentReadinessDidChange:(bool)arg1;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1 manualListener:(bool)arg2;
- (void)noteSceneContentIsReady:(bool)arg1;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)setSceneHandle:(id)arg1;

@end
