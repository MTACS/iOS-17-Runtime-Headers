
@interface SBSceneDisconnectionManager : NSObject {
    bool  _isExecuting;
    unsigned long long  _numberOfRecentScenesExcludedFromDisconnection;
}

@property (nonatomic) bool isExecuting;
@property (nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;

+ (id)sharedManager;

- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg1;
- (void)disconnectScenes:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isExecuting;
- (id)liveScenesForApplication:(id)arg1;
- (unsigned long long)numberOfRecentScenesExcludedFromDisconnection;
- (unsigned long long)positionOf:(id)arg1 inSwitcher:(id)arg2;
- (id)sceneManager;
- (void)setIsExecuting:(bool)arg1;
- (void)setNumberOfRecentScenesExcludedFromDisconnection:(unsigned long long)arg1;
- (bool)shouldDisconnectScene:(id)arg1 inSwitcher:(id)arg2;

@end
