
@interface PBFModalSceneDelegate : UIResponder <UIWindowSceneDelegate> {
    NSMapTable * _sceneToWindowMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)init;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;

@end
