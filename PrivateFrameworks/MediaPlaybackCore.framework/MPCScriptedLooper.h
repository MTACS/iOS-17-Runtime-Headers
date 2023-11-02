
@interface MPCScriptedLooper : NSObject {
    long long  _currentLoopCount;
    long long  _currentSceneIndex;
    NSError * _error;
    bool  _executingPauseScene;
    MPNotificationObserver * _itemDidPlayToEndObserver;
    id /* block */  _pauseFinishedBlock;
    AVPlayer * _player;
    MPCSceneCollection * _sceneCollection;
    bool  _sceneExecutionPaused;
    long long  _status;
    id  _timeObserver;
}

@property (nonatomic) long long currentLoopCount;
@property (nonatomic) long long currentSceneIndex;
@property (nonatomic, retain) NSError *error;
@property (getter=isExecutingPauseScene, nonatomic) bool executingPauseScene;
@property (nonatomic, retain) MPNotificationObserver *itemDidPlayToEndObserver;
@property (nonatomic, copy) id /* block */ pauseFinishedBlock;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, retain) MPCSceneCollection *sceneCollection;
@property (getter=isSceneExecutionPaused, nonatomic) bool sceneExecutionPaused;
@property (nonatomic) long long status;
@property (nonatomic, retain) id timeObserver;

+ (bool)isScriptedLoopingDisabled;
+ (void)setScriptedLoopingDisabled:(bool)arg1;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_CMTimeForFrame:(long long)arg1;
- (void)_advanceScene;
- (void)_createSceneCollectionForAssetWithPreloadedKeys:(id)arg1;
- (void)_executeCurrentScene;
- (void)_executeSceneCollection;
- (void)_loopIfNeeded;
- (void)_pause;
- (void)_sharedInitWithItem:(id)arg1 audioSession:(id)arg2;
- (void)_updateRateIfNeeded;
- (long long)currentLoopCount;
- (id)currentScene;
- (long long)currentSceneIndex;
- (void)dealloc;
- (id)error;
- (long long)frameForCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 audioSession:(id)arg2;
- (id)initWithAsset:(id)arg1 sceneCollection:(id)arg2;
- (id)initWithAsset:(id)arg1 sceneCollection:(id)arg2 audioSession:(id)arg3;
- (id)initWithURL:(id)arg1 sceneCollection:(id)arg2;
- (id)initWithURL:(id)arg1 sceneCollection:(id)arg2 audioSession:(id)arg3;
- (bool)isExecutingPauseScene;
- (bool)isSceneExecutionPaused;
- (id)itemDidPlayToEndObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id /* block */)pauseFinishedBlock;
- (void)pauseScenes;
- (void)playScenes;
- (id)player;
- (void)restartScenes;
- (id)sceneCollection;
- (void)seekToFrameIfNeeded:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setCurrentLoopCount:(long long)arg1;
- (void)setCurrentSceneIndex:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setExecutingPauseScene:(bool)arg1;
- (void)setItemDidPlayToEndObserver:(id)arg1;
- (void)setPauseFinishedBlock:(id /* block */)arg1;
- (void)setSceneCollection:(id)arg1;
- (void)setSceneExecutionPaused:(bool)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeObserver:(id)arg1;
- (long long)status;
- (id)timeObserver;

@end
