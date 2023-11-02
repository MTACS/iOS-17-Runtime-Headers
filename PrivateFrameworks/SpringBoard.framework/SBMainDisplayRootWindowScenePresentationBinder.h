
@interface SBMainDisplayRootWindowScenePresentationBinder : SBRootWindowScenePresentationBinder {
    UIWindowScene * _disconnectedFromScene;
    NSMutableArray * _disconnectionAssertions;
    SBRootSceneWindow * _rootWindow;
}

@property (nonatomic, readonly) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_disconnectFromRenderServer;
- (id)_init;
- (void)_reconnectToRenderServer;
- (id)assertDisconnectionFromRenderServerForReason:(id)arg1;
- (id)rootWindow;

@end
