
@interface MagnifierSupport.SceneDelegate : UIResponder <UIWindowSceneDelegate> {
    void window;
}

@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)init;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)updateAppearanceForReduceTransparency:(id)arg1;
- (id)window;

@end
