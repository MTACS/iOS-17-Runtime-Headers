
@interface TUWindowRestorationManager : NSObject {
    NSObject * _appKitWindow;
    <TUWindowRestorationManagerDelegate> * _delegate;
    NSString * _windowFrameName;
}

@property (nonatomic, readonly) NSObject *appKitWindow;
@property (nonatomic) <TUWindowRestorationManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *windowFrameName;

- (void).cxx_destruct;
- (id)appKitWindow;
- (id)application;
- (id)delegate;
- (void)didFinishRestoringWindows;
- (id)initWithPluginBundleName:(id)arg1 windowFrameName:(id)arg2 delegate:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFrameName:(id)arg1 forWindow:(id)arg2 changeFrame:(bool)arg3;
- (id)windowFrameName;
- (void)windowSceneDidBecomeVisible;

@end
