
@interface SwiftUI.AppSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    void $__lazy_storage_$_appDelegate;
    void lastVersion;
    void presentationDataType;
    void presentationDataValue;
    void rawPresentationDataValue;
    void sceneBridge;
    void sceneDelegateBox;
    void sceneItemID;
    void scenePhase;
    void sceneStorageValues;
    void window;
}

@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)stateRestorationActivityForScene:(id)arg1;
- (id)window;

@end
