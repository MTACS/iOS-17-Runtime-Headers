
@interface SwiftUI.AppDelegate : UIResponder <UIApplicationDelegate> {
    void fallbackDelegate;
    void mainMenuController;
}

- (void).cxx_destruct;
- (void)_performMainMenuShortcutKeyCommand:(id)arg1;
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)respondsToSelector:(SEL)arg1;
- (void)validateCommand:(id)arg1;

@end
