
@interface BrowserSceneDelegateRouter : NSObject <UIWindowSceneDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;

@end
